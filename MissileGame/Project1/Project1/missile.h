#ifndef MISSILE
#define MISSILE
#include "warhead.h"
struct Missile
{
	Warhead warhead;
	int coordinatesX = 0;
	int coordinatesY = 0;
	
	bool armed = false;
	

	int  missileCreator(int explosionRadius, int armingCode, int valueIn);
};
#endif //MISSILE
