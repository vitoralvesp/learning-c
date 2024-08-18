/* LABORATORY CLASS 01 - RECURSION 
Write a recursive function that calculates the x raised to the power of n, where x and n are positive integers.
*/
#include <stdio.h>

int power_of_n(int x, int n);

int main() {

    int x, n, result;
    printf("\n\n>> Enter a value to x and n to calcule x^n: ");
    scanf("%d %d", &x, &n);

    result = power_of_n(x, n);
    printf(">> Result: %d\n\n", result);

    return 0;

}

int power_of_n(int x, int n) {

    if (n == 0) return 1;
    else return x * power_of_n(x, n - 1);

}