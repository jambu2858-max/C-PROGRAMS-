#include <stdio.h>

int main() {
    int a, b, c, biggest, comparisons = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    comparisons++;
    if (a > b) {
        comparisons++;
        if (a > c)
            biggest = a;
        else
            biggest = c;
    } 
    else {
        comparisons++;
        if (b > c)
            biggest = b;
        else
            biggest = c;
    }

    printf("The biggest number is: %d\n", biggest);
    printf("Number of comparisons made: %d\n", comparisons);

    return 0;
}
