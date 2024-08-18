/* LABORATORY CLASS 01 - RECURSION 
Write a recursive function that calculates the product of a * b, where a and b are integers greater than zero.
*/

#include <stdio.h>

int recursive_multiplication_func(int x, int y);

int main() {

    int a, b, result;
    printf("\n>> Enter two values a and b to calcule their product ab: ");
    scanf("%d %d", &a, &b);

    result = recursive_multiplication_func(a, b);
    printf(">> Product AB: %d\n\n", result);

    return 0;

}


int recursive_multiplication_func(int x, int y) {

    if (y == 1) return x;
    else return x + recursive_multiplication_func(x, y - 1);

}

