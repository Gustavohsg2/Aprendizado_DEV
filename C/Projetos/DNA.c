#include <stdio.h>
#include <string.h>

char dna[1000], transc_dna[1000];
int tamanho;

int main(){
    
printf("Digite a sequencia de DNA:\n"); 
scanf("%s", dna);

tamanho = strlen(dna);

tamanho = tamanho - 1;
for(int x = 0; x<=tamanho; x++){
    if(strcmp(dna[x], "A")==0){
        transc_dna[x] = "T";
    }else if(strcmp(dna[x], "T")==0){
        transc_dna[x] = "A";
    }else if(strcmp(dna[x], "G")==0){
        transc_dna[x] = "C";
    }else if(strcmp(dna[x], "C")==0){
        transc_dna[x] = "G";
    }
}
    
printf("\n\n%s", transc_dna);
    
    
}