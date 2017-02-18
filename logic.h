#ifndef _LOGIC_H_
#define _LOGIC_H_


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "LS_allegro.h"
#include "loadRanking.h"
#include "tipus.h"


Partida initVariables(Partida partida);
Partida baixarBoles(Partida partida);
Partida nextBoles(Partida partida);
Partida temps(Partida partida);

#endif