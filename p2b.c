#include <stdio.h>

int main() {
    int inputInt;
    float inputFloat;
    char inputChar;

    printf("Enter an integer: ");
    scanf("%d", &inputInt);

    printf("Enter a float: ");
    scanf("%f", &inputFloat);

    // Use a space before %c to consume any leftover newline character
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    printf("\nYou entered integer: %d\n", inputInt);
    printf("You entered float: %f\n", inputFloat);
    printf("You entered character: %c\n", inputChar);

    return 0;
}
