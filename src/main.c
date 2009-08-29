#include <stdlib.h>
#include "bowling.h"

int main(int argc, char** argv) {

	char linha[50];
	leLinha(argv[1], linha);

	int resultado = calcularResultado(linha);

	FILE* arquivoSaida = fopen("resulado.txt", "w");
	fprintf(arquivoSaida, "1: %d\n", resultado);
	fclose(arquivoSaida);

	return 0;
}
