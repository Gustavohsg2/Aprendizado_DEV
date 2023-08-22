#include <stdio.h>

float valor, taxa;
int tempo;

void prestacao(){
float prest;
prest = valor+(valor*(taxa/100)*tempo);
printf("Prestação = %f", prest);
}
main(){
	printf("Digite o valor:\n");
	scanf("%f",&valor);
	printf("Digite a taxa:\n");
	scanf("%f",&taxa);
	printf("Digite o tempo, em meses:\n");
	scanf("%d",&tempo);
	
	prestacao();
}
