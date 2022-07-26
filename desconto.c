#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float desconto, valorInicial,valorFinal;

int main(int argc, char *argv[]) {
	scanf("%f", &valorInicial);
	
	desconto = valorInicial * 0.23;
	valorFinal = valorInicial - desconto;
	printf("%.2f",valorFinal);
	
	
	return 0;
}
