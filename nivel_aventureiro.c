#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 5;
 
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
 
    a += 2; 
    b *= 3; 

    a++; 
    b--; 
 
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Novo valor de a (após += 2 e ++): %d\n", a);
    printf("Novo valor de b (após *= 3 e --): %d\n", b);
 
    return 0;
}
