#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float area, volume;

int main(int argc, char *argv[]) {
	
	scanf("%f", &area);
	
	volume = pow(area,3);
	printf("%.2f", volume);
	
	return 0;
}
