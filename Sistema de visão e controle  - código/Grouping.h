/*
 ________________________________________________________________________________________
| INFORMAÇÕES:																			 |
|	 ARQUIVO:    Grouping.h														         |
|	 SISTEMA:    VisionSystem															 |
|	 COMPONENTE: Grouping															     |
|	 LINGUAGEM:  C++																	 |
|	 E-MAIL:     gprufs@gmail.com														 |
|	 CONTATO:    http://gprufs.org/														 |
|	 AUTOR:      GPRUFS 2015															 |
|																						 |
| DESCRIÇÃO:     Esse arquivo contém a definição da classe Grouping que é responsável    |
|                por realizar um agrupamento dos pixels em uma imagem. Cada um desses    |
|				 pixels representam uma determinada cor de identificação dos robôs,      |
|				 o que possibilita encontrar  centro dos robôs.                          |
|																			   			 |
|																						 |
|                               (c) Copyright GPRUFS 2015                                |
|________________________________________________________________________________________|
*/
#ifndef GROUPING_H_
#define GROUPING_H_

#include <iostream>
#include <opencv2/opencv.hpp>
#include <Windows.h>
#include <algorithm>
#include <vector>
#include <utility>
#include <time.h>
using namespace std;
using namespace cv;
class Grouping
{
private:
	int number;
	int classifier;

	vector<Point>pontos;
	vector<double> posx;
	vector<double> posy;
	vector< vector<Point> > contours;
	vector<Vec4i> hierarchy;
	vector<int> qtd_kmeans;

    /*
     * Método: Classification_FindContours(Mat *segmentacao);
     *
     * Descrição: Esse método busca os pontos de contorno de um corpo
     *            em uma imagem binária, determina o centro do corpo por meio desses pontos e armazena os dados referentes
     *            aos centros de massa e quantidade de pontos, nas suas respectivas variáveis variáveis.
     *
     *
     * Parâmetros:
     *            1)  *segmentacao - Ponteiro para a imagem binária
     *
     *
     * Retorno:
     *       Nenhum
     *
     */
	void Classification_FindContours(Mat *segmentacao);

    /*
     * Método: Classification_kmeans(Mat *segmentacao);
     *
     * Descrição: Esse método usa o algoritmo k-means para agrupar
     *            os pontos de uma imagem binária e  encontrar os centros de
	 *            massa dos corpos  contidos na mesma.
     *
     *
     *
     * Parâmetros:
     *            1)  *segmentacao - Ponteiro para a imagem binária
     *
     *
     * Retorno:
     *         Nenhum
     *
     */
	void Classification_kmeans(Mat *segmentacao);

public:
    /*
     * Método: Grouping(int qtd_group,int classification);
     *
     * Descrição: Construtor do objeto Grouping
     *
     * Parâmetros:
     *            1)  qtd_group - Valor inteiro referente a quantidade
     *                               de corpos que serão procurados na imagem.
     *
     *            2)  classification - Valor inteiro referente ao classificador
     *                                   que será usado: (0)- FindContours (1)- k-means.
     *
     *
     * Retorno:
     *         Nenhum
     *
     */
	Grouping(int qtd_group,int classification);

    /*
     * Método: Grouping_Result(Mat *binary_image);
     *
     * Descrição: Método para responsável por retornar os centros encontrados 
	              em cada uma dos corpos juntamente com as suas respectivas quantidades de pontos.
     *
     * Parámetros:
     *           1) *segmentacao - Ponteiro para a imagem binária
     *
     *
     * Retorno:
     *       Vetor do tipo  vector<pair<Point,int> > onde cada elemento possui um par de valores
     *       que correspondem respectivamente à coordenada (x,y) do centro do corpo com relação à imagem
     *       e à quantidade de pontos referente a este mesmo corpo.
     */
     vector<pair<Point,int> > Grouping_Result(Mat *binary_image);
};
#endif
