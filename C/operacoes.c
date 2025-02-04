#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int soma = a+b;
    int sub = a-b;
    int mult = a*b;
    float div = a/b;
    printf("%d + %d = %d\n", a, b, soma);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mult);
    printf("%d / %d = %.1f\n", a, b, div);
    return 0;
}