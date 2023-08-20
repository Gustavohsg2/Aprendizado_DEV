#include <stdio.h>
#include <math.h>
#include <locale.h>
float a,b,c,delta, x1, x2;
main(){
    printf("escreva o valor de A:\n");
    scanf("%f",&a);
    printf("escreva o valor de B:\n");
    scanf("%f",&b);
    printf("escreva o valor de C:\n");
    scanf("%f",&c);
	if((a==0)||(b==0)||(c==0)){
		printf("nenhum n�mero digitado pode ser igual a zero!\n");
	}else{
		delta=(b*b)-4.0*a*c;
		printf("delta=%0.2f\n",delta);
		if(delta<0){
			printf("n�o possui raizes");
		}
		if(delta==0){
			x1=-b/2*a;
			printf("x=%0.2f",x1);
		}
		if(delta>0){
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("X1=%0.2f\n",x1);
			printf("X2=%0.2f\n",x2);
        }
    }		
}
