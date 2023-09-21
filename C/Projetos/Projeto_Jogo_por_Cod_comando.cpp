#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tela[5][5], pos[2], z;
char ud[5];

main(){
	tela[2][2] = 1;
	tela[2][3] = 2;
	pos[0] = 2;
	pos[1] = 2;
	
	while(z == 0){
		
		for(int x = 0; x<=4; x++){
			for(int y = 0; y<= 4; y++){
				printf("%d", tela[y][x]);	
			}
			printf("\n");
		}
	
		gets(ud);
		if(strcmp(ud, "w")==0 && tela[pos[0]][pos[1] - 1] != 2){
			tela[pos[0]][pos[1]] = 0;
			tela[pos[0]][pos[1] - 1] = 1;
		
			pos[1] = pos[1] - 1;
			fflush(stdin);
		}else if(strcmp(ud, "s")==0 && tela[pos[0]][pos[1] + 1] != 2){
			tela[pos[0]][pos[1]] = 0;
			tela[pos[0]][pos[1] + 1] = 1;
		
			pos[1] = pos[1] + 1;
			fflush(stdin);
		}else if(strcmp(ud, "a")==0 && tela[pos[0] - 1][pos[1]] != 2){
			tela[pos[0]][pos[1]] = 0;
			tela[pos[0] - 1][pos[1]] = 1;
		
			pos[0] = pos[0] - 1;
			fflush(stdin);
		}else if(strcmp(ud, "d")==0 && tela[pos[0] + 1][pos[1]] != 2){
			tela[pos[0]][pos[1]] = 0;
			tela[pos[0] + 1][pos[1]] = 1;
		
			pos[0] = pos[0] + 1;
			fflush(stdin);
		}else{
			z = 1;
		}
		system("cls");
	}
	printf("GAME OVER");
	
}

//if(tela[pos[0]][pos[1]]){
			
			
//		}
