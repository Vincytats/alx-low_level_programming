#include <stdio.h>

int add(int a, int b) {
    return (a + b);
}

int sub(int a, int b) {
    return (a - b);
}

int mul(int a, int b) {
    return (a * b);
}

int division(int a, int b) {
    return (a / b);
}

int mod(int a, int b) {
    return (a % b);
}

int main() {
    int x = 10;
    int y = 3;

    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", sub(x, y));
    printf("Multiplication: %d\n", mul(x, y));
    printf("Division: %d\n", division(x, y));
    printf("Modulus: %d\n", mod(x, y));

    return 0;
}
