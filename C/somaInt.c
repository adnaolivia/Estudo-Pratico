#include <stdio.h>

int main() {
    int n, i, soma;
    scanf("%d", &n);
    int vetor[n];
    for (i=0; i<n; ++i)
        scanf("%d", &vetor[i]);
    printf("vetor: ");
    for (i=0; i<n; ++i)
        printf("%d ", vetor[i]);
    soma = 0;
    //   0  1  2  3  4
    // { 4, 5, 3, 1, 2}
    for (i=0 ; i<n ; ++i)
        soma = soma + vetor[i];
    printf("%d", soma);
    return 0;
}