#include <stdio.h>

int main () {

/*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)

*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;


printf("Entre com o numero 1: \n");
scanf("%d", &numero1);

printf("Entre com o numero 2: \n");
scanf("%d", &numero2);


//Operacao soma
soma = numero1 + numero2;

//Operacao subtracao
subtracao = numero1 - numero2;

//Operacao multiplicacao
multiplicacao = numero1 * numero2;

////Operacao divisao
divisao = numero1 / numero2;


printf("A soma é: %d\n", soma);
printf("A subtracao é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisao é: %d\n", divisao);

}