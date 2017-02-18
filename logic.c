#include "logic.h"

Partida initVariables(Partida partida){
		int i=0,j=0;
		
		
		partida.temps.time0 = (float) clock();
		
		//Inicialitzem les variables del disparador i currentbola
		partida.disparador.x = COTAX*5;
		partida.disparador.y = COTAY*11;
		partida.disparador.currentBola.y = partida.disparador.y - COTAY;
		partida.disparador.currentBola.color = colorAleatori();
		
		//Inizialitzem les boles properes
		for(i=0; i<4; i++){
			partida.proxBoles[i].color = colorAleatori();
			partida.proxBoles[i].y = COTAY * 11 + MARGEY;
			partida.proxBoles[i].x =  i*COTAX + (COTAX * 12) + MARGEX;
		}
		
		//Inizialitzem la bolaFlag a 0 en cadasquena de les caselles
		for(i=0; i<FILES; i++){
			for(j=0; j<COLUMNES; j++){
				partida.casella[i][j].bolaFlag = 0;
			}
		}
		
		//Inizialitzem les caselles
		for(i=0; i<FILES; i++){
			
			for(j=0; j<COLUMNES; j++){
				partida.casella[i][j].bola.y = COTAY*i +MARGEY;
				partida.casella[i][j].bola.x = COTAX*j +MARGEX;
				partida.casella[i][j].bola.color = colorAleatori();
				partida.casella[0][j].bolaFlag = 1;	

			}
		}
		return partida;
	}
	
Partida baixarBoles(Partida partida){
	int i,j;
	
	//Escanajem la array de caselles per abaix i fem una copia de la fila de dalt de cadasquna en la fila sota la mateixa
	for(i=FILES; i>0; i--){
		for(j=0; j<COLUMNES; j++){
			partida.casella[i][j].bola.color = partida.casella[i-1][j].bola.color;
			partida.casella[i][j].bolaFlag = partida.casella[i-1][j].bolaFlag;
			
			//Crea les noves boles que apareixen a dalt
			partida.casella[i-1][j].bola.color = colorAleatori();
			partida.casella[i-1][j].bolaFlag = 1;
		}
	}
	
	for(i=0; i<4; i++){
			partida.proxBoles[i].y = COTAY * 11 + MARGEY;
			partida.proxBoles[i].x =  i*COTAX + (COTAX * 12) + MARGEX;
	}
	
	return partida;

}
	
Partida nextBoles(Partida partida){
	int i;
	partida.disparador.currentBola.y = partida.disparador.y - COTAY;
	partida.disparador.currentBola.color = partida.proxBoles[0].color;
	for(i=0; i<4; i++){
		partida.proxBoles[i].color = partida.proxBoles[i+1].color;
	}
	partida.proxBoles[3].color = colorAleatori();
	
	return partida;
}

