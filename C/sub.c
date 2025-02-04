#include <stdio.h>

int sub(int a, int b) {
    int s = a-b;
    return s;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", sub(a,b));
    return 0;
}
