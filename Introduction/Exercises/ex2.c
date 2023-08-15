// Escreva um programa que converte uma temperatura Celsius em Fahrenheit.
#include <stdio.h>

int main()
{
    float celsius;
    scanf("%f", &celsius);

    // Converting Celsius to Fahrenheit
    float fahrenheit = ((celsius * 9 / 5) + 32);

    printf("%.2f\n", fahrenheit);

    return 0;
}