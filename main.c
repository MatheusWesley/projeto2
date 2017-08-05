#include<stdio.h>
#include "operacao.h"

int main(){
  // Declarando variaveis
  int n1=0, n2=0, r=0;

   printf("Ola este é uma calculadora que apenas soma dois numeros inteiros!\n");
   printf("Primeiro numero: ");
   scanf("%d", &n1);
   printf("Segundo numero: ");
   scanf("%d", &n2);

   //Chamando a função soma
   r = soma(n1,n2);
   printf("O Resultado da soma é: %d\n", r);

 return 0;
}
