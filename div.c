#include <stdio.h>

int div(int a, int b) {
    int d = a/b;
    return d;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("a divisao eh: %d\n", div(a,b));
    return 0;
}