#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *file;
	file = fopen("teste.txt", "a");//Mudar 
	
	
	if(file == NULL){
		printf("Arquivo nao pode ser aberto");
		getchar();
		exit(1);
	}
	
	char nome[20];
	int dia, mes, ano, anoAtual = 2022, idade;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("\nDigite o dia, mes e ano que nasceu: ");
	scanf("%d%d%d", &dia, &mes, &ano);
	
	if(dia < 1 || dia > 31){
		system("cls");
		printf("Dia invalido");
		fclose(file);
		exit(1);
	}else if(mes < 1 || mes > 12){
		system("cls");
		printf("Mês invalido");
		fclose(file);
		exit(1);
	}else if(ano < 1){
		system("cls");
		printf("Ano invalido");
		fclose(file);
		exit(1);
	}else{
	idade = anoAtual - ano;
	
	fputs(nome, file);
	fprintf(file, ", %d/%d/%d, idade: %d\n", dia, mes, ano, idade);
	fclose(file);
	
	system("pause");
	}
	return 0;
}
