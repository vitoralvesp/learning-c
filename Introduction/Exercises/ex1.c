// Escreva um programa que lê dois valores inteiros e exibe os seguintes resultados: a) o resultado da soma dos números; b) o resultado da média dos números.

#include <stdio.h>

int main()
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    // Sum Operation
    int sum = (x + y);

    // Average Operation
    float average = (sum / 2);

    printf("%d\n", sum);
    printf("%.2f\n", average);

    return 0;
}