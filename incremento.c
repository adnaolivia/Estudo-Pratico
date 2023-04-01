#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 9;
    int y = a+c++;
    int x = a+ ++b;
    printf("b eh: %d\n", b);
    printf("x eh: %d\n", x);
    printf("c eh: %d\n", c);
    return 0;
}