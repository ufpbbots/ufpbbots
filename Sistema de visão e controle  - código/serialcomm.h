/*
 ________________________________________________________________________________________
| INFORMAÇÕES:																			 |
|	 ARQUIVO:    serialcomm.h															 |
|	 SISTEMA:    VisionSystem															 |
|	 COMPONENTE: serialcomm															     |
|	 LINGUAGEM:  C++																	 |
|	 E-MAIL:     gprufs@gmail.com														 |
|	 CONTATO:    http://gprufs.org/														 |
|	 AUTOR:      GPRUFS 2015															 |
|																						 |
| DESCRIÇÃO: Esse arquivo  possui os códigos responsáveis por estabelecer a comunicação  | 
|            serial entre o computador e o rádio, possibilitando a chamada de funções    |
|            que enviam comandos para os robôs. 							             |
|																			   			 |
|																						 |
|                               (c) Copyright GPRUFS 2015                                |
|________________________________________________________________________________________|
*/


#ifndef SERIALCOMM_H_
#define SERIALCOMM_H_


#include <stdio.h>
#include <string>
#include <windows.h>
#include <assert.h>
#include <commctrl.h>


int inicia_comunicacao_serial(int porta);
void encerra_comunicacao_serial();
void envia_comandos_robo(unsigned char *);
int RS232_OpenComport(int, int, const char *);
int RS232_SendByte(int, unsigned char);
int RS232_SendBuf(int, unsigned char *, int);
void RS232_CloseComport(int);



#endif /* SERIALCOMM_H_ */
