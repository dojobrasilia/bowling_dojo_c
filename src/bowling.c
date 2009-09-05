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

int calcularResultadoInteiros(int* arrayJogadas, int tamanho) {
	int i, frame = 0;
	int resultado = 0;

    for(i = 0; i < tamanho; i++){
    	frame++;

    	//strike
    	if (arrayJogadas[i] == 10) {
    		resultado += arrayJogadas[i];
    		continue;

    	}

    	//terceira bola do ultimo frame
    	if (frame == 11) {
    		return resultado;
    	}

    	//verifica se o frame esta completo
        if((i+1 < tamanho)) {

        	//detecta o spare
        	if (arrayJogadas[i] + arrayJogadas[i + 1] == 10) {

        		//se existe uma bola depois do spare
				if (i+2 >= tamanho) {

					//caso nao consiga calcular
					return -1;

				//calculo do spare
				} else {
					resultado += arrayJogadas[i] + arrayJogadas[i + 1] + arrayJogadas[i + 2];

				}
        	//jogada normal, frame completo
        	} else {
        		resultado += arrayJogadas[i];
        		resultado += arrayJogadas[i+1];

        	}

        	//esta consumindo o frame completo
        	i++;

        //frame incompleto, nao consegue calcular
        } else {
        	return -1;

        }
    }

    return resultado;
}

int calcularResultado(char *linha) {
	int arrayJogadas[21];

	int tamanho = getJogadas(linha,arrayJogadas);

    return calcularResultadoInteiros(arrayJogadas, tamanho);
}














