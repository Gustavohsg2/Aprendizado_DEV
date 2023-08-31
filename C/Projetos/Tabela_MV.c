#include <stdio.h>
#include <string.h>
#include <locale.h>

char times[100][250];
int PONTOSTURNO[4][2], TOTALPONTOS[4], pos[4], x, z, colocado;

int main(){
	setlocale(LC_ALL, "Portuguese");
for (x=0; x<=3; x++){
    printf("\n\nNome do time %d: ", 1+x);
    gets(times[x]);
}
for(x=0; x<=3; x++){
    for(z=0;z<=1;z++){
        printf("\nDigite a quantidade de pontos do %s no %d turno: ", times[x], 1+z);
        scanf("%d", &PONTOSTURNO[x][z]);
    }
    TOTALPONTOS[x] = PONTOSTURNO[x][0]+PONTOSTURNO[x][1];
}
for(x=0; x<=3; x++){ // ordena os times por pontos e maior segundo turno caso tenha empate.
    colocado = 3;
    for(z=0; z<=3; z++){
        if(TOTALPONTOS[x]==TOTALPONTOS[z]){
            if(PONTOSTURNO[x][1]>PONTOSTURNO[z][1]){
                colocado = colocado-1;
            }
        }if(TOTALPONTOS[x]>TOTALPONTOS[z]){
            colocado = colocado-1;
        }
    }
	if(pos[colocado]==colocado && colocado!=0){
	    colocado = colocado-1;
    }
	pos[colocado] = x;
}
printf("\nTIMES | 1°Turno | 2°Turno\n");
for(x=0;x<=3;x++){
    printf("\n%s    |  %d     |  %d   |", times[x], PONTOSTURNO[x][0], PONTOSTURNO[x][1]);
}
printf("\n\n| TIME | PONTOS |");
for(x=0; x<=3; x++){ // apresenta a tabela de classificação
    printf("\n %d | %s | %d |", 1+x, times[pos[x]], TOTALPONTOS[pos[x]]);
}
printf("\n\nTIME CAMPEÃO: %s\nVICE-CAMPEÃO: %s\nPIOR TIME DO CAMPEONATO: %s", times[pos[0]], times[pos[1]], times[pos[3]]);
}