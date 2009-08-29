/*
 * bowling_test.c
 *
 *  Created on: 29/08/2009
 *      Author: Bruno
 */

#include "cutest/CuTest.h"
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
