#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter total marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 35) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    if (marks >= 90)
        grade = 'A';
    else if (marks >= 75)
        grade = 'B';
    else if (marks >= 60)
        grade = 'C';
    else if (marks >= 50)
        grade = 'D';
    else if (marks >= 35)
        grade = 'E';
    else
        grade = 'F';
  printf("Grade: %c\n", grade);

    return 0;
}
