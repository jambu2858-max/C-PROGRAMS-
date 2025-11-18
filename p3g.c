#include <stdio.h>

int main() {
    int a, b, c;

    a = (b = 10, c = 20, b + c);  

    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);
    printf("Result stored in a (b + c): %d\n", a);

    return 0;
}
