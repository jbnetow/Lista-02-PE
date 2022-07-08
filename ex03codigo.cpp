#include<stdio.h>
int main(){
int contador = 10, *temp, soma = 0, count = 00;
temp = &count;
*temp = 20;
temp = &soma;
*temp = contador;
printf("contador = %d, *temp = %d, soma = %d\n", contador, *temp, soma);
}

