#include <stdio.h>

int n;

void soma(){
	for(int x = 1; x<=n; x++){
		int soma = soma+x;
	}
	printf("A soma é igual a: %d", soma);
}

void fibo(){
	int atual = 1; 
	int anterior = 0;
	int depois;
	for(int x = 1; x<=n; x++){
		depois = atual+anterior;
		anterior = atual;
		atual = depois;
		if(atual >= n){
			x = n+1;
		}else{
			printf("%d-", atual);
		}
	}
}

main(){
	scanf("%d", &n);
	soma();
	fibo();
}
