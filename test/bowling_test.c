/*
 * bowling_test.c
 *
 *  Created on: 29/08/2009
 *      Author: Bruno
 */

#include "cutest/CuTest.h"
#include <string.h>
#include "bowling_test.h"
#include "../src/bowling.h"

void TestLeLinha(CuTest *tc){
	char linha[50];
	leLinha("test_input.txt", linha);
	CuAssertStrEquals(tc, "1: 1 3, 10, 2 1, 1 1, 9 1, 8 0, 2 2, 2 2, 2 2, 2 2", linha);
}

//void TesteCalcularResultado(CuTest *tc) {
//	char* linha = "1: 1 3, 10, 2 1, 1 1, 9 1, 8 0, 2 2, 2 2, 2 2, 2 2";
//	CuAssertIntEquals(tc,64,calcularResultado(linha));
//}

void TesteCalcularUmaJogada(CuTest *tc) {
	char* jogada = "1: 1 3";
	CuAssertIntEquals(tc,4,calcularResultado(jogada));
}

void TesteCalcularDuasJogadas(CuTest *tc) {
	char* jogada = "1: 1 3, 4 5";
	CuAssertIntEquals(tc,13,calcularResultado(jogada));
}

void TesteCalcularUmDezSemSacanagemDoStrike(CuTest *tc) {
	char* jogada = "1: 10, 0 0";
	CuAssertIntEquals(tc,10,calcularResultado(jogada));
}

void TesteCalcularDezFramesZerados(CuTest *tc) {
	char* jogada = "1: 0 0, 0 0, 0 0, 0 0, 0 0, 0 0, 0 0, 0 0, 0 0, 0 0";
	CuAssertIntEquals(tc,0,calcularResultado(jogada));
}

void TesteCalcularVinteEUmaBolas(CuTest *tc) {
	char* jogada = "1: 9 1, 0 0, 0 0, 0 0, 0 0, 0 0, 0 0, 0 0, 0 0, 9 1 0";
	CuAssertIntEquals(tc,20,calcularResultado(jogada));
}

void TesteCalcularVinteJogadas(CuTest *tc) {
	char* jogada = "1: 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 1 1";
	CuAssertIntEquals(tc,20,calcularResultado(jogada));
}

void TesteCalcularVinteUmaJogadasComStrikeFinal(CuTest *tc) {
	char* jogada = "1: 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 1 1, 10 0 0";
	CuAssertIntEquals(tc,28,calcularResultado(jogada));
}

void TesteCalcularSpareSimples(CuTest *tc) {
	char* jogada = "1: 9 1, 1 0";
	CuAssertIntEquals(tc,12,calcularResultado(jogada));
}

void TesteNaoConsideraLixoFimArray(CuTest *tc) {
	int arrayJogadas[6] = {9,1,1,0,10,10};
	//quantidade jogadas(qtdJogadas) menor que arrayJogadas. Nao deve somar os 10`s
	int qtdJogadas = 4;
	CuAssertIntEquals(tc,12,calcularResultadoInteiros(arrayJogadas,qtdJogadas));
}

void TesteNaoConsideraLixoFimArrayDepoisDeSpare(CuTest *tc) {
	int arrayJogadas[7] = {9,0,1,9,10,10};
	//quantidade jogadas(qtdJogadas) menor que arrayJogadas. Nao deve somar os 10`s

	int qtdJogadas = 4;

	//Nao consegue calcular pois falta a quinta bola devido ao spare, retorna -1
	CuAssertIntEquals(tc,-1,calcularResultadoInteiros(arrayJogadas,qtdJogadas));
}

void TesteCalcularSpareDuplo(CuTest *tc) {
	char* jogada = "1: 9 1, 5 5, 1 0";
	CuAssertIntEquals(tc,27,calcularResultado(jogada));
}

void TesteCalcularFalsoSpare(CuTest *tc) {
	char* jogada = "1: 1 5, 5 1";
	CuAssertIntEquals(tc,12,calcularResultado(jogada));
}

void TesteCalcularFrameIncompleto(CuTest *tc) {
	char* jogada = "1: 1 5, 5";
	CuAssertIntEquals(tc,-1,calcularResultado(jogada));
}

void TesteCalcularSpareTriplo(CuTest *tc) {
	char* jogada = "1: 9 1, 5 5, 1 9, 2 0";
	//				   15   11   12   2

	CuAssertIntEquals(tc,40,calcularResultado(jogada));
}

void TesteCalcularStrikeIncompleto(CuTest *tc) {
	char* jogada = "1: 10";
	CuAssertIntEquals(tc,-1,calcularResultado(jogada));
}

void TesteCalcularStrikeIncompleto2(CuTest *tc) {
	char* jogada = "1: 10, 1";
	CuAssertIntEquals(tc,-1,calcularResultado(jogada));
}

void TesteCalcularStrikeSimples(CuTest *tc) {
	char* jogada = "1: 10, 1 2";
	CuAssertIntEquals(tc,16,calcularResultado(jogada));
}

// TODO
// - strike
// - strikes encadeados
// - ultimo frame de 3 bolas
// 		- completa strikes com zeros no œltimo frame?
// - jogo perfeito






