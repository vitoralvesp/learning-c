// Escreva um programa para calcular a área de uma esfera. Seu programa deve declarar uma constante Pi de valor 3.141592. Para calcularmos a área da superfície da esfera utilizamos a seguinte fórmula: A = 4 . π . r²
#include <stdio.h>

int main()
{
    const float pi = 3.141592; // Pi constant variable
    float r; // Area

    scanf("%f", &r);

    // Surface Area of the Sphere Formula
    float surfaceArea = (4 * pi) * (r * r);

    printf("%.2f\n", surfaceArea);

    return 0;
}