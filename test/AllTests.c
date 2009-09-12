

/* This is auto-generated code. Edit at your own peril. */

#include <stdio.h>

#include "cutest/CuTest.h"
#include "bowling_test.h"

void RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, TestLeLinha);
    SUITE_ADD_TEST(suite, TesteCalcularUmaJogada);
    SUITE_ADD_TEST(suite, TesteCalcularDuasJogadas);
    SUITE_ADD_TEST(suite, TesteCalcularUmDezSemSacanagemDoStrike);
    SUITE_ADD_TEST(suite, TesteCalcularDezFramesZerados);
    SUITE_ADD_TEST(suite, TesteCalcularVinteEUmaBolas);
    SUITE_ADD_TEST(suite, TesteCalcularVinteJogadas);
    SUITE_ADD_TEST(suite, TesteCalcularVinteUmaJogadasComStrikeFinal);
    SUITE_ADD_TEST(suite, TesteCalcularSpareSimples);
    SUITE_ADD_TEST(suite, TesteNaoConsideraLixoFimArray);
    SUITE_ADD_TEST(suite, TesteNaoConsideraLixoFimArrayDepoisDeSpare);
    SUITE_ADD_TEST(suite, TesteCalcularSpareDuplo);
    SUITE_ADD_TEST(suite, TesteCalcularFalsoSpare);
    SUITE_ADD_TEST(suite, TesteCalcularFrameIncompleto);
    SUITE_ADD_TEST(suite, TesteCalcularSpareTriplo);
    SUITE_ADD_TEST(suite, TesteCalcularStrikeIncompleto);
    SUITE_ADD_TEST(suite, TesteCalcularStrikeIncompleto2);
    SUITE_ADD_TEST(suite, TesteCalcularStrikeSimples);
    SUITE_ADD_TEST(suite, TesteCalcularStrikeDuplo);
    SUITE_ADD_TEST(suite, TesteCalcularStrikeTriplo);
    SUITE_ADD_TEST(suite, TesteCalcularStrikeSpareStrike);
    SUITE_ADD_TEST(suite, TesteCalcularUltimaJogada);
    SUITE_ADD_TEST(suite, TesteCalcularUltimaJogadaComStrikeEPontoNaProximaBola);
    SUITE_ADD_TEST(suite, TesteCalcularUltimaJogadaComStrikeNoFrameNoveESpareFrameDezComStrikeNoFinal);
    SUITE_ADD_TEST(suite, TesteAceitacaoVelho);
    SUITE_ADD_TEST(suite, TesteCalcularUltimaJogadaComUmMonteDeSacanagem);
    SUITE_ADD_TEST(suite, TesteJogoQuasePerfeito);
    SUITE_ADD_TEST(suite, TesteJogoPerfeito);

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main(void)
{
    RunAllTests();

    return 0;
}

