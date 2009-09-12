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
void TesteCalcularVinteJogadas(CuTest *tc);
void TesteCalcularVinteUmaJogadasComStrikeFinal(CuTest *tc);
void TesteCalcularSpareSimples(CuTest *tc);
void TesteNaoConsideraLixoFimArray(CuTest *tc);
void TesteNaoConsideraLixoFimArrayDepoisDeSpare(CuTest *tc);
void TesteCalcularSpareDuplo(CuTest *tc);
void TesteCalcularFalsoSpare(CuTest *tc);
void TesteCalcularFrameIncompleto(CuTest *tc);
void TesteCalcularSpareTriplo(CuTest *tc);
void TesteCalcularStrikeIncompleto(CuTest *tc);
void TesteCalcularStrikeIncompleto2(CuTest *tc);
void TesteCalcularStrikeSimples(CuTest *tc);
void TesteCalcularStrikeDuplo(CuTest *tc);
void TesteCalcularStrikeTriplo(CuTest *tc);
void TesteCalcularStrikeSpareStrike(CuTest *tc);
void TesteCalcularUltimaJogada(CuTest *tc);
void TesteCalcularUltimaJogadaComStrikeEPontoNaProximaBola(CuTest *tc);
void TesteCalcularUltimaJogadaComStrikeNoFrameNoveESpareFrameDezComStrikeNoFinal(CuTest *tc);


#endif /* BOWLING_TEST_H_ */
