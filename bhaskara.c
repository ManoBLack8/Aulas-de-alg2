#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float A,B,C,delta,X1,X2;

int main(int argc, char *argv[]) {
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	delta = ((B*B) - (4 * A * C));
	X1 = (((-B) + (sqrt(delta)))/(2 * A));
	X2 = (((-B) - (sqrt(delta)))/(2 * A));
	printf("%.2f %.2f %.2f", delta, X1, X2);
	return 0;
}
