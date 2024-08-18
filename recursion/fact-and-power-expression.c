/* LABORATORY CLASS 01 - RECURSION 
Write a recursive function to calcule the follow expression:
1 + x + (x^2/2!) + (x^3/3!) + ... + (x^n/n!)
*/
#include <stdio.h>

int calc_exp(int x, int n);
int factorial(int n);

int main() {

    int x, n, result;
    printf("\n>> Enter the values of x and n: ");
    scanf("%d %d", &x, &n);

    result = calc_exp(x, n);
    printf(">> Result: %d\n\n", result);

    return 0;

}


int calc_exp(int x, int n) {

    if (n == 0) return 1;
    else return x + calc_exp(x * n / factorial(n), n - 1);
    return -1;

}


int factorial(int n) {

    if (n == 0) return 1;
    else return n * factorial(n - 1);

}