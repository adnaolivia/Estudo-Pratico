#include <stdio.h>

int main() {
    int x = 27;
    int *ptr;
    ptr = &x; //atribuindo o endereço da variavel x ao ponteiro
    printf("conteudo de int x = %d\n", x);
    printf("endereco de x = %x\n", &x);
    printf("conteudo do ponteiro ptr = %x\n", ptr);
    return 0;
}
