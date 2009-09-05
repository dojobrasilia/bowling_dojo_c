#include "bowling.h"

/*
 * bowling.c
 *
 *  Created on: 29/08/2009
 *      Author: Bruno
 */

void leLinha(char* nomearq, char* linha) {
	FILE *arquivoEntrada = fopen(nomearq, "r");

	char c;
	int i;

	fread(&c, 1, 1, arquivoEntrada);

	for(i=0; c != '\n' ;i++) {
		linha[i] = c;
		fread(&c, 1, 1, arquivoEntrada);
	}

	linha[i] = '\0';

}

int getJogadas(char* linha, int *arrayJogadas) {
	int i, qteJogadas;
	char jogada[3];
//	jogada[2] = '\0';
	int jogadaI;

	qteJogadas = 0;

	// começa no caractere 3 pra ignorar o '1: '
	for(i = 3; linha[i] != '\0'; i++){

		jogada[0] = linha[i];

		if(jogada[0] != ' ' && jogada[0] != ',' ){

			// se for um strike (só pode ser 0...)
			if (linha[i+1] == '0') {
				jogada[1]='0';
				i++; // consome o zero no for

			} else {
				jogada[1]='\0';
			}

			jogadaI = atoi(jogada);
			arrayJogadas[qteJogadas++] = jogadaI;
		}
	}

	return qteJogadas;
}

int calcularResultado(char *linha) {
	int i, j;
	int resultado = 0;

	int arrayJogadas[21];

	j = getJogadas(linha,arrayJogadas);

	for (i = 0; i < j; i++) {
		resultado += arrayJogadas[i];
	}

	return resultado;
}
