/*
 ________________________________________________________________________________________
| INFORMAÇÕES:																			 |
|	 ARQUIVO:    mainwindow.h														     |
|	 SISTEMA:    VisionSystem															 |
|	 COMPONENTE: mainwindow															     |
|	 LINGUAGEM:  C++																	 |
|	 E-MAIL:     gprufs@gmail.com														 |
|	 CONTATO:    http://gprufs.org/														 |
|	 AUTOR:      GPRUFS 2015															 |
|																						 |
| DESCRIÇÃO:     Esse arquivo contém a definição da classe MainWindows que corresponde   |
|                à janela principal do programa e tem a função de instanciar e juntar    |
|                todos os módulos necessários para o funcionamento desse sistema.        |
|																			   			 |
|																						 |
|                               (c) Copyright GPRUFS 2015                                |
|________________________________________________________________________________________|
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>
#include <QImage>
#include <QFileDialog>
#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <string>
#include <time.h>
#include <vector>

#include "Configurations.h"
#include "Robot.h"
#include "Build_Robot.h"
#include "Segmentation.h"
#include "Grouping.h"
#include "Ball.h"
#include "controlador.h"
#include "serialcomm.h"

#include "constantes_robot.h"
#include <omp.h>
#include "strategy.h"

// incluido por lucas - INICIO
#include <math.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <assert.h>
#include <commctrl.h>
#include "serialcomm.h"
#include "comandos.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int classificador; //0-Find Contours...//1- Kameans
    QTimer *cronometro;
    QString tempo;
    Configurations *set;
    VideoCapture cap;
    Mat input;
    double dist;
    string filename = "C:/Caboclinhos/Arquivos Caboclinhos/ufpbbots/build-VisionSystem_ULTIMATE_QT-Desktop_Qt_5_5_1_MinGW_32bit-Release/release/Settings.xml";

    vector<Point>azul_pt;       // Vetor de coordenadas(x,y) da posição do centro de cada um dos corpos azuis.
    vector<Point>vermelho_pt;   // Vetor de coordenadas(x,y) da posição do centro de cada um dos corpos vermelhos.
    vector<Point>amarelo_pt;    // Vetor de coordenadas(x,y) da posição do centro de cada um dos corpos amarelos.
    vector<Point>laranja_pt;    // Vetor de coordenadas(x,y) da posição do centro de cada um dos corpos laranjas.
    vector<Point>Magenta_pt;    // Vetor de coordenadas(x,y) da posição do centro de cada um dos corpos Magentas.
    vector<Point>Green_pt;      // Vetor de coordenadas(x,y) da posição do centro de cada um dos corpos verdes.

    Scalar Blue[2];             // vetor com o intervalo de limiares para a cor azul. Blue[0]->limiar mínimo Blue[1]->limiar máximo
    Scalar Red[2];              // vetor com o intervalo de limiares para a cor vermelho. Red[0]->limiar mínimo Red[1]-limiar máximo
    Scalar Yellow[2];           // vetor com o intervalo de limiares para a cor amarelo. yellow[0]->limiar mínimo yellow[1]->limiar máximo
    Scalar Orange[2];           // vetor com o intervalo de limiares para a cor laranja. orange[0]->limiar mínimo orange[1]->limiar máximo
    Scalar Mg[2];               // vetor com o intervalo de limiares para a cor magenta. Mg[0]->limiar mínimo Mg[1]->limiar máximo
    Scalar Green[2];            // vetor com o intervalo de limiares para a cor verde. Green[0]->limiar mínimo Green[1]->limiar máximo

    Mat Mascaras[2];            //vetor com as mascaras usadas para operações de abertura e fechamento.
    Rect roi;                   // retângulo usado para fazer a retirada da imagem do campo

    Segmentation *azul;         // Objeto responsável pela segmentação dos corpos de cor azul
    Segmentation *amarelo;      // Objeto responsável pela segmentação dos corpos de cor amarelo
    Segmentation *vermelho;     // Objeto responsável pela segmentação dos corpos de cor vermelo
    Segmentation *verde;        // Objeto responsável pela segmentação dos corpos de cor verde
    Segmentation *magenta;      // Objeto responsável pela segmentação dos corpos de cor magenta
    Segmentation *laranja;      // Objeto responsável pela segmentação dos corpos de cor laranja

    Grouping *azul_group;       // Objeto responsável por identificar o centro de massa dos corpos de cor azul
    Grouping *amarelo_group;    // Objeto responsável por identificar o centro de massa dos corpos de cor amarelo
    Grouping *verde_group;      // Objeto responsável por identificar o centro de massa dos corpos de cor verde
    Grouping *vermelho_group;   // Objeto responsável por identificar o centro de massa dos corpos de cor vermelho
    Grouping *magenta_group;    // Objeto responsável por identificar o centro de massa dos corpos de cor magenta
    Grouping *laranja_group;    // Objeto responsável por identificar o centro de massa dos corpos de cor laranja

    Constantes_robot *con;      // Objeto responsável pelas constantes características de cada robô
    Strategy *Cerebro;          // Objeto responsável pelos comportamentos e coordenação dos robôs
    int comando;
    int comando_atacante;
    int comando_zagueiro;
    int comando_goleiro;

    Build_Robot *Machine_of_Robots; // Objeto responsável por evitar ambiguidades durante colisões ou junção de robôs
    Ball Bola;                      // Objeto responsável por armazenar as coordenadas(x,y) da posição da bola

    clock_t end,start;
    vector<Robot> robos;        // Objeto responsável por armazenar todos dos robôs instanciados no sistema
    QImage image;

    Robot rb1;
    Robot rb2;
    Robot rb3;

    int time; //Valor que representa a camisa do time.  (0) - TIME AZUL, (1)- TIME AMARELO
    int contador;
    Point pos_bola[2];
    int aux;
    bool flagconexao = true; //flag para iniciar ou encerrar a comunicação serial

    static QRect place_image(QRect image, QRect displayport, int offset=0);
    void paintEvent(QPaintEvent *);

private slots:

    /*
     * Método: on_ConectarSerial_clicked();
     *
     * Descrição: Método responsável por atribuir iniciar a comunicação serial.
     *
     * Parâmetro:
     *           Nenhum.
     * Retorno:
     *       Nenhum.
    */
    void on_ConectarSerial_clicked();

    /*
     * Metodo: MauMau
     *
    */
    /*
     * Método: on_ListSerial_clicked();
     *
     * Descrição: Método responsável por atualizar a lista de portas seriais.
     *
     * Parâmetro:
     *           Nenhum.
     * Retorno:
     *       Nenhum.
    */
    //void on_ListSerial_clicked();

    /*
     * Metodo: MauMau2
     *
    */
    void refreshCOMPort();

    /*
     * Método:Refresh_position_robots();
     *
     * Descrição: Método responsável capturar e processar toda a imagem do campo, a fim de encontrar as posições centrais dos robôs
	 *
     * Parâmetro:
     *           Nenhum.
     * Retorno:
     *       Nenhum.
    */
     void Refresh_position_robots();

     void on_actionKmeans_triggered();

     /*
      * Método:on_select_azul_triggered();
      *
      * Descrição: Método responsável por disparar um evento de seleção da cor azul do time
      *
      * Parâmetro:
      *           Nenhum.
      * Retorno:
      *          Nenhum.
     */
     void on_select_azul_triggered();

     /*
      * Método:on_select_amarelo_triggered();
      *
      * Descrição: Método responsável por disparar um evento de seleção da cor amarela do time
      *
      * Parâmetro:
      *           Nenhum.
      * Retorno:
      *       Nenhum.
     */
     void on_select_amarelo_triggered();

     void on_actionComandos_triggered();

     /*
      * Método: on_pushButton_clicked();
      *
      * Descrição: Método responsável por atribuir estratégias e comportamentos para os robôs
      *            que foram selecionados pelo usuário.
      *
      * Parâmetro:
      *           Nenhum.
      * Retorno:
      *       Nenhum.
     */
     void on_pushButton_clicked();


     /*
      * Método:on_pushButton_2_clicked();

      *
      * Descrição: Método responsável por parar todos os robôs
      *
      * Parâmetro:
      *           Nenhum.
      * Retorno:
      *       Nenhum.
     */
     void on_pushButton_2_clicked();

     void on_comboBox_currentIndexChanged(int index);

     void on_comboBox_activated(int index);

     /*
      * Método:on_actionAbrir_Settings_triggered();
      *
      * Descrição: Método resposável por carregar dados de um determinado arquivo de texto.
      *            Lista dos dados  carregados:
      *                - Limiares
      *                - Configurações do campo
	  *                - Configurações da câmera
	  *                - Constantes dos robôs
      *
      * Parâmetro:
      *           Nenhum.
      * Retorno:
      *          Nenhum.
     */
     void on_actionAbrir_Settings_triggered();

signals:
     void Robos(Robot rb1,Robot rb2,Robot rb3);


};

#endif // MAINWINDOW_H
