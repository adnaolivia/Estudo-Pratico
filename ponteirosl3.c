#include <stdio.h>

int main() {
    int x;
    int *ptr;
    ptr = &x;
    scanf("%d", ptr);
    printf("%d", x);
    return 0;
}
