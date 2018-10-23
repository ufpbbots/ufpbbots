#ifndef CONTROLADOR_FUZZY_H
#define CONTROLADOR_FUZZY_H

#define FIS_TYPE float
#define FIS_RESOLUSION 101
#define FIS_MIN -3.4028235E+38
#define FIS_MAX 3.4028235E+38
typedef FIS_TYPE(*_FIS_MF)(FIS_TYPE, FIS_TYPE*);
typedef FIS_TYPE(*_FIS_ARR_OP)(FIS_TYPE, FIS_TYPE);
typedef FIS_TYPE(*_FIS_ARR)(FIS_TYPE*, int, _FIS_ARR_OP);


class Controlador_Fuzzy
{
public:
    Controlador_Fuzzy();

};

struct velocidade
{
    double V;
    double W;
};

velocidade controle_fuzzy(double dist, double angulo_fi);
void fis_evaluate();


#endif // CONTROLADOR_FUZZY_H
