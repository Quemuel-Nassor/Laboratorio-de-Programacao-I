/*Elaborar o algoritmo para ler a idade e o sexo de n pessoas e
mostrar o % de pessoas por sexo e a quantidade de pessoas maiores
de 18 anos do sexo masculino */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declara��o das vari�veis
int idade, n=0, totalM=0, totalF=0, M18anos=0;
char sexo, resposta = 'S';

//declara��o da fun��o principal
main()
{
	//estrutura de repeti��o
	while(toupper(resposta)=='S')
	{
		//limpar a tela
		system("cls");
		printf("Informe o sexo: ");
		sexo = getche();
		printf("\nInforme a idade: ");
		scanf("%i", &idade);
		n++;
		if(toupper(sexo)=='F')
			totalF++;
		else if(toupper(sexo)=='M') 
			totalM++;
		else 
		{
			printf("\nInformacao invalida");
			n--;
		}
		
		if(toupper(sexo)=='M' && idade >18)
			M18anos++;
		
		printf("\nContinuar <s/n>: ");
		resposta=getche();
	}
	
	//sa�da de dados
	printf("\nHa %.2f%% de Mulheres: ", float(totalF)/n*100);
	printf("\nHa %.2f%% de Homens: ", float(totalM)/n*100);
	printf("\n%i sao homens maiores de 18 anos", M18anos);
	system("pause");	
}
