#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float valor1,valor2,valor3,mediaponderada;

int main(int argc, char *argv[]) {
	
	scanf("%f", &valor1);
	scanf("%f", &valor2);
	scanf("%f", &valor3);
	
	mediaponderada = (((valor1 * 2) + (valor2 * 5) + (valor3 * 7))/ (2 + 5 + 7));
	
	printf("%.2f",mediaponderada);
	return 0;
}
