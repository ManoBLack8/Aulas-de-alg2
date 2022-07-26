#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raio, volume;

int main(int argc, char *argv[]) {
	scanf("%f", &raio);
	volume = (1.3333333333333333333333333333333 * 3.14 * pow(raio , 3));
	printf("%.2f",volume);
	return 0;
}
