#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raio, altura, volume;

int main(int argc, char *argv[]) {
	scanf("%f", &raio);
	scanf("%f", &altura);
	
	volume = (3.14 * (pow(raio,2)) * altura);
	
	printf("%.2f",volume);
	
	return 0;
}
