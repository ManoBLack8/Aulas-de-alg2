#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float velocidadeinicial, aceleracao, tempo,velocidadefinal;

int main(int argc, char *argv[]) {
	scanf("%f", &velocidadeinicial);
	scanf("%f", &aceleracao);
	scanf("%f", &tempo);

	
	velocidadefinal = (velocidadeinicial + (aceleracao * tempo));
	printf("%.2f",velocidadefinal);
	return 0;
}
