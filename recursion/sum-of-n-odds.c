/* LABORATORY CLASS 01 - RECURSION 
Write a recursive function that returns the sum of the first n odd integers.
*/

#include <stdio.h>

int sum_odd_func(int n);

int main() {

    int n, result;
    printf("\n>> To calcule the total sum of odd numbers in a sequence of n positive numbers, define n: ");
    scanf("%d", &n);

    result = sum_odd_func(n);
    printf(">> Total Sum: %d\n\n", result);

    return 0;

}

int sum_odd_func(int n) {

    if (n == 1) return 1;
    else if(n % 2 > 0) return sum_odd_func(n-1);

}