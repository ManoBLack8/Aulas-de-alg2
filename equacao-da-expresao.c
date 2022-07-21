#include <stdio.h>
#include <math.h>

float x, resultado;
int main(int argc, char const *argv[])
{
    scanf("%f", &x);

    resultado = (x + 4)*(x - 6);

    printf("%.2f", resultado);
    return 0;
}
