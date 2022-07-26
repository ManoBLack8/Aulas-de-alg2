#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cOposto,cAdjacente,hipotenusa;

int main(int argc, char *argv[]) {
    scanf("%f", &cOposto);
    scanf("%f", &cAdjacente);

    hipotenusa = sqrt((cOposto*cOposto)+(cAdjacente*cAdjacente));

    printf("%.2f", hipotenusa);
	return 0;
}
