#include <locale.h> 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int registro(){
	
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	

	printf("digite seu cpf: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	
	FILE *file; 
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	file =fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
//_____________________________	

	printf("digite seu nome: ");
	scanf("%s", nome);
	
	file =fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
//______________________________	
	
	printf("digite eu sobrenome: ");
	scanf("%s", sobrenome);
	
	file =fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file =fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
//_______________________________	

	printf("digite sua função: ");
	scanf("%s", cargo);
	
	file =fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	
	system("pause");
	
	
}


int consultar()
{
	
	setlocale(LC_ALL, "portuguese");
	
	char cpf [40];
	char conteudo [200];
	
	printf("digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file =fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("não foi possivel abrir este arquivo!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nessas são as informações do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
	
	system("pause");
		
	
}



int deletar()
{
	
	char cpf[40];
	
	printf("\ndigite o cpf que você deseja deletar: ");
	scanf("%s", cpf);
	
	
	remove(cpf);
	
	FILE *file;
	file =fopen(cpf, "r");
	
	if(file == NULL)
	{
			printf("não foi possivel encontrar este cpf.\n");
			system("pause");
	}
	
}


int main()
{
	int opcao= 0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	 
	setlocale(LC_ALL, "portuguese");
	
	printf("## cartório da EBAC ##\n\n");
	printf("\tescolha a opção desejada no menu:\n\n");  
	printf("\t1 - registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - deletar nomes\n");
    printf("\t4 - sair do sistema\n");
    printf("opção:");
	
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
			
		
		case 2: 
		consultar();
		break;
			
		
		case 3:
		deletar();
		break;
		
		
		default:
		printf("esta opção é invalida !\n");
		system("pause");
		break;
		
		case 4:
		printf("obrigado por ultilizar o sistema !");
		return 0;
		break;
	}
}
}




  
