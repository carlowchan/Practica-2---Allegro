#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "LS_allegro.h"
#include "loadRanking.h"
#include "tipus.h"
#include "grafics.h"
#include "logic.h"

#define COTAX 64
#define COTAY 66.666666666666
#define MARGEX COTAX/2
#define MARGEY COTAY/2
#define COLUMNES 12
#define FILES 10
#define TAMANY 25

	
	
int main(void){

	int opcio,flag =0,disparar=0,nSortir = 0;
	Partida partida;

	

	do{
	flag = 0;
	printf("Benvingut a LSBobble!\n");
	printf("1. Nova partida\n");
	printf("2. Escollir nivell\n");
	printf("3. Carregar ranquing\n");
	printf("4. Veure ranquing\n");
	printf("5. Sortir\n");
	printf("\n\n");
	
	printf("\t opcio: ");
	scanf("%d",&opcio);

	
	switch(opcio){
		
		case 1 :
			
			printf("Escriu el teu nickname: \n");
			partida.jugador.nom[0] = '\0';
			LS_allegro_console_fflush();
			gets(partida.jugador.nom);
			
			//Inicialitzem Allegro
			LS_allegro_init(1024,800,"Pelotas");
			
			break;
			
		case 2 :
		
			break;
			
		case 3 :
		
			break;
			
		case 4 :
		
			break;
			
		case 5:
			return 0;
			break;
		
		default :
			printf("Error, opcio incorrecta! \n\n");
			flag = 1;
			break;
	}
	
	}while(flag);
	
	partida = initVariables(partida);
	
	
	//Bucle infinit del joc
	while(!nSortir){
			
		
		
		partida.temps.time1 = (float) clock();
		
			if ( (partida.temps.time1-partida.temps.time0) / (float)CLOCKS_PER_SEC > 1){
 		// Calculem la diferència de temps i transformem a secs
			
				partida.temps.ttotal ++;
				partida = baixarBoles(partida);
				// Si ha passat mig segon, restablim temps inicial t0
				partida.temps.time0 = (float) clock();
			}
 		

		//Escoltem el teclat esperant la tecla ESC
		if(LS_allegro_key_pressed(ALLEGRO_KEY_ESCAPE)){
			nSortir = 1;
		}
		

		
		

		//Current Bola
		if(LS_allegro_key_pressed(ALLEGRO_KEY_SPACE)){
			disparar = 1;
		}
		
		
		
		if(disparar == 1){
		partida.disparador.currentBola.y --;
			if(partida.disparador.currentBola.y < 0){
				disparar = 0;
				partida = nextBoles(partida);
				
			}
		}
		
		//Procurem que la x de currentBola segueixi el disparador EXCEPTE quan esta sent disparada
		if(disparar == 0){
		partida.disparador.currentBola.x = partida.disparador.x;
		} else { 
			partida.disparador.currentBola.x = partida.disparador.currentBola.x; 
		
		}
		
		
	

		
		//MOURE DISPARADOR
		if((LS_allegro_key_pressed(ALLEGRO_KEY_D)) && (partida.disparador.x < COTAX*11)){
			partida.disparador.x = partida.disparador.x + COTAX;
			
			} else if ((LS_allegro_key_pressed(ALLEGRO_KEY_A)) && (partida.disparador.x > 0)){
				partida.disparador.x = partida.disparador.x - COTAX;
		}
		
		//Fer baixar les boles
		if(LS_allegro_key_pressed(ALLEGRO_KEY_DOWN)){
					partida = baixarBoles(partida);
		}
		
		
		
		//Pintem tots els elements
		pintarElements(partida);
		

	}
	
	//Tanquem la finestra gràfica
	LS_allegro_exit();
	
	return 0;
}

	int colorAleatori(){
		int num;
		
		//Generem un numero aleatori
		num = rand() % 4;
		
		//Segons el numero ens retorna un color
		switch(num){
			case 0: return RED;
					break;
			case 1: return YELLOW;
					break;
			case 2: return GREEN;
					break;
			case 3: return CYAN;
					break;
		}

	}
	
	
	

		
