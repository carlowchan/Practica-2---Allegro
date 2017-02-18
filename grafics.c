#include "grafics.h"
 
	
void pintarElements(Partida partida){
	
	
	pintarEscenari();

	pintarDisparador(partida);
	
	pintarCaselles(partida);
	
	pintarBolesproperes(partida);
	
	pintarText(partida);
	
	
	//Pintem la pantalla de la finestra gràfica
	LS_allegro_clear_and_paint(LIGHT_BLUE);
	
	
}

void pintarEscenari(){
	//Escenari
	al_draw_line(0,10*COTAY,12*COTAX,10*COTAY,LS_allegro_get_color(WHITE),0);
	al_draw_line(12*COTAX,0,12*COTAX,12*COTAY,LS_allegro_get_color(WHITE),0);
	al_draw_filled_rectangle(COTAX*12, 0, 1024, COTAY * 11, LS_allegro_get_color(BLACK));
}

void pintarDisparador(Partida partida){
	//Pintem el disparador i currentBola
	al_draw_filled_rectangle(partida.disparador.x, partida.disparador.y, partida.disparador.x + COTAX, partida.disparador.y + COTAY, LS_allegro_get_color(WHITE));
	al_draw_filled_circle(partida.disparador.currentBola.x + MARGEX ,partida.disparador.currentBola.y + MARGEY, TAMANY, LS_allegro_get_color(partida.disparador.currentBola.color));
	
}

void pintarCaselles(Partida partida){
	int i,j;
	//Pintem les Caselles
	for(i=0; i<FILES; i++){
		
		for(j=0; j<COLUMNES; j++){
			
			if(partida.casella[i][j].bolaFlag == 1){
				al_draw_filled_circle(partida.casella[i][j].bola.x, partida.casella[i][j].bola.y, TAMANY, LS_allegro_get_color(partida.casella[i][j].bola.color));
			}
			
		}
	}

}

void pintarBolesproperes(Partida partida){
	int i;
	//Pintem les Properes Boles
	for(i=0; i<4; i++){
		al_draw_filled_circle(partida.proxBoles[i].x, partida.proxBoles[i].y, TAMANY, LS_allegro_get_color(partida.proxBoles[i].color));
}
}

void pintarText(Partida partida){
	//Pintem el Text
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY/2,ALLEGRO_ALIGN_CENTRE,"NOM");
	al_draw_text(LS_allegro_get_font(NORMAL),LS_allegro_get_color(WHITE),14*COTAX,COTAY + COTAY/4,ALLEGRO_ALIGN_CENTRE,partida.jugador.nom);
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY*2,ALLEGRO_ALIGN_CENTRE,"NIVEll");
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY*3,ALLEGRO_ALIGN_CENTRE,"3");
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY*4,ALLEGRO_ALIGN_CENTRE,"TEMPS NIVELL");
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY*5,ALLEGRO_ALIGN_CENTRE,"0:26");
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY*6,ALLEGRO_ALIGN_CENTRE,"TEMPS TOTAL");
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY*7,ALLEGRO_ALIGN_CENTRE,"15:26");
	al_draw_text(LS_allegro_get_font(LARGE),LS_allegro_get_color(WHITE),14*COTAX,COTAY*8,ALLEGRO_ALIGN_CENTRE,"RANKING");
	al_draw_text(LS_allegro_get_font(NORMAL),LS_allegro_get_color(WHITE),14*COTAX,COTAY*9,ALLEGRO_ALIGN_CENTRE,"JUGADOR1 - N5 - 45:34");
	al_draw_text(LS_allegro_get_font(NORMAL),LS_allegro_get_color(WHITE),14*COTAX,COTAY*9 + MARGEY/2,ALLEGRO_ALIGN_CENTRE,"JUGADOR2 - N5 - 45:34");
	al_draw_text(LS_allegro_get_font(NORMAL),LS_allegro_get_color(WHITE),14*COTAX,COTAY*9 + MARGEY,ALLEGRO_ALIGN_CENTRE,"JUGADOR3 - N5 - 45:34");
	al_draw_text(LS_allegro_get_font(NORMAL),LS_allegro_get_color(WHITE),14*COTAX,COTAY*10 - MARGEY/2,ALLEGRO_ALIGN_CENTRE,"JUGADOR4 - N5 - 45:34");
	al_draw_text(LS_allegro_get_font(NORMAL),LS_allegro_get_color(WHITE),14*COTAX,COTAY*10,ALLEGRO_ALIGN_CENTRE,"JUGADOR5 - N5 - 45:34");
}
	

