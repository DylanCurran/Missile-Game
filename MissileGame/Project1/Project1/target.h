#ifndef TARGET
#define TARGET
#include <iostream>
struct Target
{
	const int TARGET_WIDTH = 10;
	const int TARGET_LENGTH = 10;
	const int TARGET_SPEED = 1;
	int m_targetX = 360;
	int m_targetY = 400;
};
#endif //TARGET