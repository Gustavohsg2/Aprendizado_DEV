#include <stdio.h>
#include <string.h>
#include <locale.h>
int x, n, r, r1, n10, n11, y, t, t2, qcpf;
float porinv, porval, inv, val;
char con[10];
int main(){
	setlocale(LC_ALL, "Portuguese");
    do{
    	y = 11; 
		r = 0; 
		r1 = 0; 
		n10 = 0; 
		n11 = 0;
    	printf("Digite o cpf d�gito por d�gito:\n");
    	for (x=10; x>= 2; x = x-1){
        	scanf("%d", &n);
        	if((n >= 0) && (n <= 9)){
        		r = r+(n*x);
        		r1 = r1+(n*y);
        		y = y - 1;
    		}else{
    			printf("==================================================\nN�MERO INV�LIDO! DIGITE NOVAMENTE SOMENTE N�MEROS DE 0 a 9!\n==================================================\n");
    			x = x+1;
			}
    	}
    	scanf("%d", &t);
    	while((t < 0) || (t > 9)){
    		printf("==================================================\nN�MERO INV�LIDO! DIGITE NOVAMENTE SOMENTE N�MEROS DE 0 a 9!\n==================================================\n");
			scanf("%d", &t);
		}
		scanf("%d", &t2);
		while((t2 < 0) || (t2 > 9)){
			printf("==================================================\nN�MERO INV�LIDO! DIGITE NOVAMENTE SOMENTE N�MEROS DE 0 a 9!\n==================================================\n\n");
			scanf("%d", &t2);
		}	
    	if(r%11>=2){
        	n10 = ((r%11)*-1)+11; 
			r1 = r1+(2*n10);	
    	}if(r1%11>=2){
        	n11 = ((r1%11)*-1)+11;
    	}if((n10==t) && (n11==t2)){
        	printf("\n==========\nCpf V�lido\n==========\n"); 
			val = val+1;
    	}else{
        	printf("\n==========\nCpf Inv�lido\n==========\n"); 
			inv = inv+1;
    	}
    	printf("\nDeseja continuar?\nDigite S para continuar\nDigite N para encerrar\n\nDIGITE COM LETRA MAI�SCULA!\n");
        scanf("%s", &con);
	}while(strcmp(con, "n")==1);
	qcpf = inv+val;
	porval = (val/(qcpf))*100; 
	porinv = (inv/(qcpf))*100;
	printf("\nForam testados %d cpf's\n\nForam digitados %0.0f cpf's v�lidos e %0.0f cpf's inv�lidos\n\nForam digitados %0.2f %% de cpf's v�lidos e %0.2f %% de cpf's inv�lidos\n", qcpf, val, inv, porval, porinv);
}