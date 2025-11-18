#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int c = 5;
    int d = 5;

    a++;    
    ++b;        
    c--;
    --d;        

    printf("a (post-increment) = %d\n", a); 
    printf("b (pre-increment)  = %d\n", b); 
    printf("c (post-decrement) = %d\n", c); 
    printf("d (pre-decrement)  = %d\n", d);

    return 0;
}
