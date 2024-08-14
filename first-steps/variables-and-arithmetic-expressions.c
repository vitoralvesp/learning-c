#include <stdio.h>

int main() {

    int a, b, result;       // int -> 4 bytes
    short c, d;             // short int -> 2 bytes 
    long var_i, var_ii;     // long int -> 8 bytes
    float e, f;             // float -> 4 bytes
    double h, i;            // double -> 8 bytes
    char character;         // char -> 1 byte

    a = 10;
    b = 10;
    result = a + b;
    printf(">> Result (int): %d", result);

    c = 500;
    d = 1000;
    result = d - c;
    printf("\n>> Result (short): %d", result);

    var_i = 40000;
    var_ii = 10000;
    long result_2 = var_i * var_ii;
    printf("\n>> Result (long): %ld", result_2);

    e = 25.0f;
    f = 5.0f;
    float result_3 = e / f;
    printf("\n>> Result (float): %.2f", result_3);

    h = 50.0f;
    i = 10.0f;
    double result_4 = h / i;
    printf("\n>> Result (double): %.5f", result_4);

    character = 'C';
    printf("\n>> Result (char): %c", character);

    return 0;

}