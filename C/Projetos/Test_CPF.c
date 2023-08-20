#include <stdio.h>
#include <string.h>
#include <locale.h>
int x, n, r, r1, n10, n11, y, t, t2;
float porinv, porval, inv, val, qcpf;
char con[10];


/*  O código a seguir poderia ser feito com matrizes e vetores, 
mas não foi feito pois o objetivo era treinar o uso de laços de repetição.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
    do{
    	y = 11;
    	r = 0;
    	r1 = 0;
        // A seguir, o usuário digita o cpf dígito por dígito.
    	printf("Digite o cpf dígito por dígito:\n");
    	for (x=10; x>= 2; x = x-1){
        scanf("%d", &n);
        r = r+n*x; 
        r1 = r1+n*y;
        y = y - 1;
    	}
    	scanf("%d", &t); 
		scanf("%d", &t2);

        // A seguir, o programa faz os cálculos para verificar se o cpf é válido ou não.
    	if(r%11>2){
        	n10 = ((r%11)*-1)+11; 
			r1 = r1+(2*n10);
    	}
    	if(r1%11>2){
        	n11 = ((r1%11)*-1)+11;
    	}
    	if((n10==t) && (n11==t2)){
        	printf("\nCpf Válido\n\n"); 
			val = val+1;
    	}else{
        	printf("\nCpf Inválido\n\n"); 
			inv = inv+1;
    	}
    	printf("Deseja continuar?\nDigite S para continuar\nDigite N para encerrar\n");
        scanf("%s", &con);
	}while(strcmp(con, "N")==1);
    // Mostro a porcentagem de cpf's válidos e inválidos e a quantidade de cada.
	qcpf = inv+val;
	porval = (val/qcpf)*100;
	porinv = (inv/qcpf)*100;
	printf("\nForam testados %0.0f cpf's\n\nForam digitados %0.0f cpf's válidos e %0.0f cpf's inválidos\n\nForam digitados %0.2f de cpf's válidos e %0.2f de cpf's inválidos\n", qcpf, val, inv, porval, porinv);
}