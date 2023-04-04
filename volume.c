#include <stdio.h>

int volume(int largura1, int altura1, int profundidade1, int largura2, int altura2, int profundidade2) {
    int q1 = largura1*altura1*profundidade1;
    int q2 = largura2*altura2*profundidade2;
    return q1;
}
int main() {
    int largura1, altura1, profundidade1, largura2, altura2, profundidade2;
    int q1, q2;
    printf("informe as medidas do q1: ");
    scanf("%d %d %d", &largura1, &altura1, &profundidade1);
    printf("informe as medidas do q2: ");
    scanf("%d %d %d"), &largura2, &altura2, &profundidade2;
    printf("volume total: ");
    printf("%d\n", volume(largura1, altura1, profundidade1, largura2, altura2, profundidade2));
    if (q1 == q2)
        printf("iguais = 0");
    if (q1 > q2)
        printf("q1 eh maior: 1");
    else
    printf("q2 eh maior: 2");
    return 0;
}
