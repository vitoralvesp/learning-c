#include <stdio.h>
#include <limits.h>

int main()
{
    const int number = 10; // Create a constant variable
    int variable = 5; // Create a variable called "variable" that returns a integer number "5"
    float floatVariable = 1.5; // Create a variable called "floatVariable" that returns a float number "1.5"
    double doubleVariable = 10.11; // Create a variable called "doubleVariable" that returns a double value "10.11"
    char character = 'a'; // Create a variable called "character" that returns a single string "a"; obs: it's not allowed to use "", only ''!
    char greetings[] = "Hello World"; // Create a variable called "greetings" that returns a string "Hello World"; obs: to create a long term string you have to use [] after the name of variables, because it's a array.


    printf("%d\n", number);
    printf("%d\n", variable); // Sintaxe to print numbers to the console!
    printf("%f\n", floatVariable); // Sintaxe to print float numbers to the console!
    printf("%lf\n", doubleVariable); // Sintaxe to print double "float" numbers to the console!
    printf("%c\n", character); // Sintaxe to print single strings to the console!
    printf("%s\n", greetings); // Sintaxe to print long term strings to the console!


    // Variables size
    short int number1;
    int number2;
    long int number3;

    printf("\n> short int size: %d\n> normal int size: %d\n> long int size: %d\n", sizeof(number1), sizeof(number2), sizeof(number3));

    // Minimmum and Maximmum space memory for integer values on my memory machine
    int min = INT_MIN;
    int max = INT_MAX;
    printf("\n> minimmum: %d\n> maximmum: %d", min, max); // -2147483648 to 2147483648

    return 0;
}