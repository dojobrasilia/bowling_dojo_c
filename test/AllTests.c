

/* This is auto-generated code. Edit at your own peril. */

#include <stdio.h>

#include "cutest/CuTest.h"
#include "bowling_test.h"

void RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();

    //SUITE_ADD_TEST(suite, TestTest);
    SUITE_ADD_TEST(suite, TestLeLinha);
    //SUITE_ADD_TEST(suite, TesteCalcularResultado);
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

