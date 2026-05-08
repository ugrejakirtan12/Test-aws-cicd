/* simple_math.c
   Small program demonstrating basic math functions in C.
   Compile: gcc -o simple_math simple_math.c
   Run: ./simple_math
*/
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
double divide_int(int a, int b) {
    if (b == 0) return 0.0;
    return (double)a / (double)b;
}

int main(void) {
    int a = 12;
    int b = 4;

    printf("a = %d, b = %d\n", a, b);
    printf("add: %d\n", add(a, b));
    printf("sub: %d\n", sub(a, b));
    printf("mul: %d\n", mul(a, b));
    printf("div: %.2f\n", divide_int(a, b));

    return 0;
}
