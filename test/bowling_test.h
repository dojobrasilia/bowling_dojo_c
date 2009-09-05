/*
 * bowling_test.h
 *
 *  Created on: 29/08/2009
 *      Author: Bruno
 */

#ifndef BOWLING_TEST_H_
#define BOWLING_TEST_H_

void TestLeLinha(CuTest *tc);
void TesteCalcularResultado(CuTest *tc);
void TesteCalcularUmaJogada(CuTest *tc);
void TesteCalcularDuasJogadas(CuTest *tc);
void TesteCalcularUmDezSemSacanagemDoStrike(CuTest *tc);
void TesteCalcularDezFramesZerados(CuTest *tc);
void TesteCalcularVinteEUmaBolas(CuTest *tc);

#endif /* BOWLING_TEST_H_ */
