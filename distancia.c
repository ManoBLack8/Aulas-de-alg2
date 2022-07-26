#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Tempo,Velocidade,Distancia;

int main(int argc, char *argv[]) {
	scanf("%f", &Tempo);
	scanf("%f", &Velocidade);
	
	Distancia = (Tempo * Velocidade);
	printf("%.2f km", Distancia);
	return 0;
}
