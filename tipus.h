#ifndef _TIPUS_H_
#define _TIPUS_H_

#define COTAX 64
#define COTAY 66.666666666666
#define MARGEX COTAX/2
#define MARGEY COTAY/2
#define COLUMNES 12
#define FILES 10
#define TAMANY 25

	
	typedef struct{
		char nom[20];
		int tmin,tsec;
	}Jugador;
	
	typedef struct{
		int x,y;
		int color;
	}Bola;

	typedef struct{
		int x,y;
		Bola currentBola;
	}Disparador;

	typedef struct{
		int ttotal,trestant;
		float time0,time1;
	}Temps;

	typedef struct{
		int velNivell, velBola, tnivell;
	
	}Nivell;

	typedef struct{
		Bola bola;
		int bolaFlag;
	}Casella;	

	typedef struct{
		int currentFiles;
		Jugador jugador;
		Casella casella[FILES][COLUMNES];
		Disparador disparador;
		Temps temps;
		Bola proxBoles[3];
		Nivell nivell;
	}Partida;
	
 #endif