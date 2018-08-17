/*
 ________________________________________________________________________________________
| INFORMAÇÕES:																			 |
|	 ARQUIVO:    Segmentation.h														     |
|	 SISTEMA:    VisionSystem															 |
|	 COMPONENTE: Segmentation															 |
|	 LINGUAGEM:  C++																	 |
|	 E-MAIL:     gprufs@gmail.com														 |
|	 CONTATO:    http://gprufs.org/														 |
|	 AUTOR:      GPRUFS 2015															 |
|																						 |
| DESCRIÇÃO:     Esse Contém a definição da classe Segmentation, que é                   |
|                responsável por realizar a segmentação de uma determinada               |
|                cor numa imagem, a partir de um intervalo entre limiares que            |
|				 representam uma determinada cor em RGB.    				             |
|																			   			 |
|																						 |
|                               (c) Copyright GPRUFS 2015                                |
|________________________________________________________________________________________|
*/
#ifndef SEGMENTATION_H_
#define SEGMENTATION_H_

#include <iostream>
#include <opencv2/opencv.hpp>
#include <Windows.h>
#include<algorithm>
#include<vector>

using namespace cv;
using namespace std;

class Segmentation
{
private:
	Scalar rgbmin;
	Scalar rgbmax;
    Mat segmentacao;
    Mat Mascara[2];
    vector< vector<Point> > contours;
    vector<Vec4i> hierarchy;

public:
    /*
     * Método: Segmentation(Scalar min,Scalar max,Mat *Mask);
     *
     * Descrição: Instancia um objeto da classe Segmentation
     *            atribuindo características como os intervalos
     *            de limiares e as máscaras para operações
     *            morfológicas de abertura e fechamento
     *
     * Parâmetros:
     *            1)  min  -  Limiar contendo os valores mínimos de Red,Green,Blue
     *
     *            2)  max  -  Limiar contendo os valores máximos de Red,Green,Blue
     *
     *            3)  *Mask - Ponteiro para uma matriz do tipo Mat que representa
     *                        a forma da máscara usada para as operações de 
     *                         abertura e fechamento.
     *
     * Retorno: Nenhum
     */
	Segmentation(Scalar min,Scalar max,Mat *Mask);

    /*
     * Método:  Segmentation_Result(Mat *frame);
     *
     * Descrição: Responsável pelo retorno da matriz binária resultante
     *            da segmentação, feita a partir dos limiares definidos,
     *            da imagem fornecida.
     *
     * Parâmetros:
     *            1)  min - Limiar contendo os valores mínimos de Red,Green,Blue
     *
     *            2)  max - Limiar contendo os valores máximo de Red,Green,Blue
     *
     *            3)  *Mask - Ponteiro para uma matriz do tipo Mat que representa
     *                        a forma da máscara usada para as operações de 
	 *                        abertura e fechamento.
     *
     * Retorno:
     *        Nenhum
     */
	Mat* Segmentation_Result(Mat *frame);





};
#endif
