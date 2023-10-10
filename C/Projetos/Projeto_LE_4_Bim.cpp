#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_BLUE "\x1b[32m"
 
float Mediabimestral[3][4], total[3], exame;
char diciplinas[3], nome[100], nome_arquivo[200];
int r;
float soma(int pos){
    float resu = 0;
    for(int x = 0; x <= 3; x++){
        resu = resu + Mediabimestral[pos][x];
    }
    return resu;
}
void atua(){
	system("Cls");
	printf("Nome: %s\nDiciplinas\t|\t%c\t|\t%c\t|\t%c\t|\nNotas\t\t|\t%0.1f\t|\t%0.1f\t|\t%0.1f\t|\n", nome,diciplinas[0], diciplinas[1], diciplinas[2], total[0]/4, total[1]/4, total[2]/4);
}
void sem_passagem_parametro(){
	for(int x = 0; x<= 2; x++){
		printf("\nDigite o nome da %d° Disciplina:  ", x+1);
		scanf("%s", &diciplinas[x]);
    	atua();
    }
}
void passagem_parametro_valor(char *s, int w){
	for(int  z = 0; z < 4; z++){
		printf("\nDigite a média do %d° bimestre da disciplina %c:\t ", z+1, s[w]);
		scanf("%f", &Mediabimestral[w][z]);
	}
	total[w] = soma(w); // MUDAR DEPOIS!
	atua();
}
void passagem_parametro_ref(float &notanecessaria, int y){
	notanecessaria = 10-(notanecessaria/4);
}
void salvar(){
	FILE *arquivo;
	strcat(nome_arquivo, nome);
	strcat(nome_arquivo, ".txt");
	arquivo = fopen(nome_arquivo, "w");
	fprintf(arquivo, "%s %c %c %c %0.2f %0.2f %0.2f", nome,diciplinas[0], diciplinas[1], diciplinas[2], total[0] , total[1], total[2]);
	fclose(arquivo);
}	
void ler(){
	FILE *arq2;
	gets(nome_arquivo);
	strcat(nome_arquivo, ".txt");
	arq2 = fopen(nome_arquivo, "r");
	fscanf(arq2, "%s %c %c %c %f %f %f", nome, &diciplinas[0], &diciplinas[1], &diciplinas[2], &total[0], &total[1], &total[2]);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	system("color 0b");
	printf("Deseja fazer o que?\n1 - Criar Novo Boletim\n2 - Abrir um já existente\n");
	scanf("%d", &r);
	fflush(stdin);
	if(r == 2){
		printf("Qual o nome do aluno?");
		ler();
		atua();
	}else{
	printf("Nome: ");
	gets(nome);
	atua();
	sem_passagem_parametro();
	for(int x = 0; x <= 2; x++){
    	passagem_parametro_valor(diciplinas, x);
	}
    for(int x = 0; x <= 2; x++){
    	if(total[x]>=24){
    		printf(ANSI_COLOR_BLUE"\n\nAPROVADO em %c", diciplinas[x]);
		}else if(total[x] < 15){
			printf(ANSI_COLOR_RED "\n\nRETIDO em %c" ANSI_COLOR_BLUE, diciplinas[x]);
		}else{
			printf( ANSI_COLOR_RED "\n\nEXAME em %c" , diciplinas[x]);
			passagem_parametro_ref(total[x], x);
			printf("\n\nnota necessária no exame = %0.1f \nDigite sua nota no exame: ", total[x]);
			scanf("%f", &exame);
			if(exame>=total[x]){
				printf(ANSI_COLOR_BLUE "\n\nRESULTADO APÓS EXAME: APROVADO em %c",diciplinas[x]);
			}else{
				printf("\n\nRESULTADO APÓS EXAME: RETIDO em %c",diciplinas[x]);
			}
		}
	}
	salvar();
	}
	return 0;
}
