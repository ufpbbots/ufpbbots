#include "controlador.h"
#include <cmath>


double W = 0, W0=0, fi0=0;

double limita_velocidade(double valor, double sat)
{
      if (valor > sat) {valor = sat;}
      if (valor < -sat) {valor = -sat;}
      return(valor);
}

ang_err olhar(Robot rb, double px, double py)   // função testada - ok!
{
      double r = rb.get_orientation(); // orientação do robô de -180 a 180
      ang_err angulo;

      angulo.flag = 1;
      angulo.fi = atan2((py - rb.get_center_robot().y) , (px - rb.get_center_robot().x))*180/M_PI;  //ângulo entre -180 e 180

      if (r < 0)  {r = r + 360;}          //muda para 0 a 360
      if (angulo.fi < 0)   {angulo.fi = angulo.fi + 360;}      //muda para 0 a 360

      angulo.fi = angulo.fi - r;  //erro de orientação a ser corrigido

      if (angulo.fi > 180) {angulo.fi = angulo.fi - 360;}  // limita entre -180 e 180
      if (angulo.fi < -180) {angulo.fi = angulo.fi + 360;} // limita entre -180 e 180

      //Teste de controle usando apenas um dos lados como frente
//      if (angulo.fi > 90 && angulo.flag == 1) // se for mais fácil, olhar com o fundo...
//      {
//          angulo.fi = angulo.fi - 180;
//          angulo.flag = -1;
//      }
//      if (angulo.fi < -90 && angulo.flag == 1) // se for mais fácil, olhar com o fundo...
//      {
//          angulo.fi = 180 + angulo.fi;
//          angulo.flag = -1;
//      }
      // angulo.fi é o ângulo a ser corrigido na convenção do sistema de visão. valores entre -90 e 90.
      // angulo.flag serve para selecionar a face que fica mais proxima do objetivo

      return(angulo);
}

double controle_angular(Robot rb, double fi, double Ta) // função testada. lembrete : (sinal de w) = -(sinal de fi)
{
//-------------------------------------------------------
           double W_max = -1,
 //            W_max = rb.W_max,    // constante limitante da tangente hiperbólica : deve ser negativa
 //           k_ang = rb.k_ang,  // constante de contração da tangente hiperbólica
           kp=0.05, //Ganho proporcional para o controlador (valor com resultados satisfatorios para 1 frente = 0.05)
 //           W=0,
           ki=0.01, //Ganho Integral para o controlador (valor com resultados satisfatorios para 1 frente = 0.01)
           //kd = 0.0;
          // Ta = 0.02; //Tempo de amostragem do sistema, por enquanto esta fixo, 20ms

    //fi = fi/90; // coloca o erro entre -1 e 1
   // double sumfi;
   // sumfi = sumfi + fi;
    //W = W_max*tanh(k_ang*fi); // não linear
    //Lei de controle: Ref[Relatório de estagio] => u(i)=u(i-1)+kp[(1+T/Ti)(e(i)-e(i-1))]
     W = W_max*tanh(W0+(kp+ki*Ta)*(fi-fi0));
   // W = kp*(fi + Ta*ki*sumfi + (kd/Ta)*(fi-fi0));
    //W = W_max*tanh(kp*fi); //Os teste iniciais foram realizados com esta lei de controle

    W0=W; //Armazena valor angular anterior
    fi0=fi; //Armazena angulo anterior para o controle
    //W = limita_velocidade(W,0.2); //satura em -1 a 1
//-------------------------------------------------------
//    Controlador Digital on/off

//    double kp = 0.2, acel = 0.01; //Melhores resultados usando o controlador on/off kp=0.04
//    if(fi>15){
//        W=-kp*acel;
//        W = -kp*(1-acel*fi/180);
//    }
//    else if (fi<-15){
//        W = kp*(1+acel*fi/180);
//        W = kp*acel;
//    }
//    else{
//        //W=kp;
//        W = 0;
//    }

//    RSM
//    double kp = 0.2, acel = 0.1; //Melhores resultados usando o controlador on/off kp=0.04
//    if(fi>15 && fi<180){
//        if(fi>25) W =-kp*(1+acel*fi/180)/10;
//        else W = -kp*(1+acel*fi/180);
//    }
//    else if (fi<-15 && fi>-180){
//        if(fi>25) W = kp*(1+acel*fi/180)/10;
//        else W = kp*(1+acel*fi/180);
//    }
//    else{
//        //W=kp;
//        W = 0;
//    }

//printf("angulo W: %f\n",W);
    return(W); //deve retornar um valor entre -1 e 1
}

double controle_angular_goleiro(Robot rb, double fi, int px, int py) // função testada. lembrete : (sinal de w) = -(sinal de fi)
{
        double kp = 60;
        double acel = 1; //Melhores resultados usando o controlador on/off kp=0.04

        if(fi < 20 && fi > -20) W=0;
        else if(fi < 40 && fi > -40) fi>0?W=-kp*acel/6000:W=kp*acel/6000;
        else if(fi < 60 && fi > -60) fi>0?W=-kp*acel/5500:W=kp*acel/5500;
        else if(fi < 80 && fi > -80) fi>0?W=-kp*acel/5000:W=kp*acel/5000;
        else if(fi < 100 && fi > -100) fi>0?W=-kp*acel/4500:W=kp*acel/4500;
        else if(fi < 120 && fi > -120) fi>0?W=-kp*acel/4400:W=kp*acel/4400;
        else if(fi < 140 && fi > -140) fi>0?W=-kp*acel/4300:W=kp*acel/4300;
        else if(fi < 160 && fi > -160) fi>0?W=-kp*acel/4200:W=kp*acel/4200;
        else if(fi < 180 && fi > -180) fi>0?W=-kp*acel/4000:W=kp*acel/4000;

//        printf("W: %f\n", pow(1,exp(-180/fi)));


//        W = limita_velocidade(W,1);

        return(W); //deve retornar um valor entre -1 e 1
}

double controle_linear(Robot rb, int px, int py)
{
    double  V = 0,
//            k_lin = rb.k_lin,   //constante de contração da tangente hiperbólica
//            V_max = rb.V_max,       //constante limitante da tangente hiperbólica
            k_lin = 0.002,
            V_max = 0.6,
            v_min = 0.03,  	 //módulo da velocidade linear mínima permitida
            ang_grande = 50, //para ângulos maiores que esse valor o sistema da prioridade ao W, reduzindo o V
            dist = distancia(rb, px, py);


    //ang_err angulo = olhar(rb, px, py);

    V = V_max*tanh(k_lin*(dist-12));  //controle não linear de V
    //V = V*cos(angulo.fi*M_PI/180);  // controle de prioridade reduzindo V quando "ang_err" for grande

//printf("Dist: %f Vel: %f\n",dist,V);

    return(V);
}

double controle_linear_goleiro(Robot rb, int px, int py)
{
    double  V = 0,
            kp = -50,
            k_lin = rb.k_lin,   //constante de contração da tangente hiperbólica
            V_max = rb.V_max,   //constante limitante da tangente hiperbólica
            v_min = 0.03,       //módulo da velocidade linear mínima permitida
            ang_grande = 30,    //para ângulos maiores que esse valor o sistema da prioridade ao W, reduzindo o V
            dist = distancia(rb, px, py);
    double acel = 80;

    ang_err angulo = olhar(rb, px, py);
    //printf("ang: %f \n", angulo.fi);

    V=kp*acel/8500;
    if(dist > 50) V=kp*acel/8000;
    if(dist > 100) V=kp*acel/7500;
    if(dist > 150) V=kp*acel/7000;
    if(dist > 200) V=kp*acel/6600;
    if(dist > 250) V=kp*acel/6000;
    if(dist > 300) V=kp*acel/5500;
    if(dist > 350) V=kp*acel/5000;
    if(dist > 400) V=kp*acel/4500;
    if(dist > 450) V=kp*acel/4000;
//    V = V_max*tanh(k_lin*(dist-12));
//    V=dist*kp/1000;
    return(V);
}



comandos gera_comandos_vr(Robot rb, double V, double W)
{
//    W=0; //teste zerando velocidade linear
//    V=0.01;
    double vre_, vrd_;
    int zona_morta=35;
    comandos final;
    int VR_max = 254;
    rb.prop_roda_d = 0.5;
    rb.prop_roda_e = 0.5;
    //RSM
    rb.zonamorta_d = zona_morta;
    rb.zonamorta_e = zona_morta + 7;
    //RSM

//    vrd_ = rb.prop_roda_d*(V + W)*(VR_max - rb.zonamorta_d);
//    vre_ = rb.prop_roda_e*(V - W)*(VR_max - rb.zonamorta_e);
    vrd_ = rb.prop_roda_d*(V + W)*(VR_max - zona_morta);
    vre_ = rb.prop_roda_e*(V - W)*(VR_max - zona_morta);
//        vrd_ = W*(VR_max - zona_morta);
//        vre_ = -W*(VR_max - zona_morta);

//    if(abs(vrd_)<rb.zonamorta_d) rb.zonamorta_d=1;
//    if(abs(vre_)<rb.zonamorta_e) rb.zonamorta_e=1;

    if (vrd_ >= 0)
    {
        vrd_ = vrd_ + rb.zonamorta_d;
//        vrd_ = vrd_ + zona_morta;
    }
    else
    {
        vrd_ = vrd_ - rb.zonamorta_d;
//        vrd_ = vrd_ - zona_morta;
    }
    vrd_ = limita_velocidade(vrd_, 254); // limita velocidade da roda direita

    if (vre_ >= 0)
    {
        vre_ = vre_ + rb.zonamorta_e;
//        vre_ = vre_ + zona_morta;
    }
    else
    {
        vre_ = vre_ - rb.zonamorta_e;
//        vre_ = vre_ - zona_morta;
    }
    vre_ = limita_velocidade(vre_, 254);  // limita velocidade da roda esquerda

    final.vrD = rint(abs(vrd_));
    final.vrE = rint(abs(vre_));

    // atribuindo as direções à palavra logica
    final.logica = 0;
    if(vrd_ > 0) final.logica = final.logica | 8;
    if(vrd_ < 0) final.logica = final.logica | 16;
    if(vre_ > 0) final.logica = final.logica | 4;
    if(vre_ < 0) final.logica = final.logica | 2;

//    final.vrD = 50;
//    final.vrE = 57;
//    final.logica = 18;
//    printf("V %f, W %f, Vrd %d, Vre %d\n",V, W, final.vrD, final.vrE);
    return(final);
}

double distancia(Robot rb, int px, int py)
{
      double dist = sqrt( pow((rb.get_center_robot().x-px),2) + pow((rb.get_center_robot().y-py),2) );
      return(dist);
}
