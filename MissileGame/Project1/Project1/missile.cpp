#include "missile.h"

 

 int Missile::missileCreator(int explosionRadius,  int armingCode, int valueIn)
 {
	 switch (valueIn)
	 {
	 case 0:
		 explosionRadius = 10;
		 armingCode = 123;
		 break;
	 case 1:
		 explosionRadius = 50;
		 armingCode = 12345;
		 break;
	 case 2:
		 explosionRadius = 1000;
		 armingCode = 12345678910;
		 break;
	 default:
		 std::cout << "that does not work" << std::endl;
		 break;

	 }

			
	 return (explosionRadius, armingCode);
 }
