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
	int i, j;
	char jogada[3];
	jogada[2] = '\0';
	int jogadaI;

	j = 0;

	for(i = 3; linha[i] != '\0'; i++){
		jogada[0] = linha[i];
		if(jogada[0] != ' ' && jogada[0] != ',' ){
			if (linha[i+1] == '0') {
				jogada[1]='0';
				i++;
			} else {
				jogada[1]='\0';
			}
			jogadaI = atoi(jogada);
			arrayJogadas[j++] = jogadaI;
		}
	}

	return j;
}

int calcularResultado(char *linha) {
	int i, j;
	int resultado = 0;

	int arrayJogadas[4];

	j = getJogadas(linha,arrayJogadas);

	for (i = 0; i < j; i++) {
		resultado += arrayJogadas[i];
	}

	return resultado;
}
