#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int inteiro;
}Numero;

int main(){
	Numero n;
	
	printf("Digite sua idade: ");
	scanf("%d", &n.inteiro);
	
	FILE *file = fopen("Exercicio2.bin", "ab");
	
	fwrite(&n, sizeof(Numero), 1, file);
	fclose(file);
	
	FILE *f = fopen("Exercicio2.bin", "rb");
	
	if(!file){
		printf("Arquivo nao pode ser aberto");
		exit(1);
	}
	
	
	while(fread(&n, sizeof(Numero), 1, f)){
		printf("Numeros digitados: %d\n", n.inteiro);
	}
	fclose(file);
	
	
	return 0;
}
