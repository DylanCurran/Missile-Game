/// <summary>
/// Missile Launching Game
/// @Author Dylan CUrran
/// Student no. C00217112
/// DAte: 18 - 20/09/2017
/// </summary>
#include <iostream>
#include "main.h"
#include "warhead.h"
#include "missile.h"
#include "target.h"
int main()
{
	int valueIn = 0;
	int explosionSize = 0;
	int armingCode = 0;
	bool armed = false;
	int armAttempt = 0;
	int randNum = 0;
	int valueIn2 = 0;
	int valueIn3 = 0;
	std::cout << "North Korea have sent a plane to bomb America, You Donald Trump must take down this plane to save America." << std::endl;
	std::cout << " You are tired of the threat that they pose to the world and you don't care if China gets in the way." << std::endl;
	std::system("pause");
	std::system("CLS");
	
	std::cout << "Commander Putin: Trump I need you to choose the type of missile you want to fire. We have three types available:" << std::endl;
	std::cout << "0. Explosive" << std::endl;
	std::cout << "1. Nuclear" << std::endl;
	std::cout << "2. OMEGA_BOMB" << std::endl;
	std::cout << "Commander Putin: Each missile is more powerful than the last. Which one would you like to use Trump. (Number is beside bomb)" << std::endl;
	std::cin >> valueIn;
	std::system("pause");
	std::system("CLS");

	switch (valueIn)
	{
	case 0:
		Warhead::EXPLOSIVE;
		std::cout << "You have chosen Explosive!" << std::endl;
		break;
	case 1:
		Warhead::NUCLEAR;
		std::cout << "You have chosen Nuclear!" << std::endl;
		break;
	case 2:
		Warhead::OMEGA_BOMB;
		std::cout << "You have chosen the OMEGA_BOMB!" << std::endl;
		break;
	default:
		std::cout << "Trump I am afraid that is not an option. Big macs can be ordered later." << std::endl;
		break;

	}

		switch (valueIn)
		{
		case 0:
			explosionSize = 10;
			armingCode = 123;
			std::cout << "The arming code is 123" << std::endl;
			break;
		case 1:
			explosionSize = 50;
			armingCode = 12345;
			std::cout << "The arming code is 12345" << std::endl;
			break;
		case 2:
			explosionSize = 1000;
			armingCode = 12345678910;
			std::cout << "The arming code is 12345678910" << std::endl;
			break;
		default:
			std::cout << "that does not work" << std::endl;
			break;

		}

		std::system("pause");
		std::system("CLS");

		std::cout << "Trump please enter the arming code given to you now to launch the missile" << std::endl;
		std::cin >> valueIn2;
		if (valueIn2 == armingCode)
		{
			armed = true;
		}
		else
		{
			armed = false;
		}

		std::system("pause");
		std::system("CLS");

		std::cout << "The Koreans have scrambled our radar. We see 4 planes at these co-ordinates:" << std::endl;
		std::cout << "0. 142x, 356y" << std::endl;
		std::cout << "1. 198x, 236y" << std::endl;
		std::cout << "2. 300x, 157y" << std::endl;
		std::cout << "3. 257x, 271y" << std::endl;

		std::cout << "Hopefully you choose right this is all in your hands Trump (numbers are enterable values)" << std::endl;
		std::cin >> valueIn3;
		std::cout << std::endl;

		
		if (armed == true)
		{
			randNum == 2;
		}
		else
		{
			randNum == 3;
		}

		std::system("pause");
		std::system("CLS");

		std::cout << "Beginning launch sequence." << std::endl;
		std::system("pause");
		std::cout << "Firing missile." << std::endl;

		if (armed == true)
		{
			if (randNum == valueIn3)
			{
				if (valueIn == 0)
				{
					std::cout << "Target is hit. You shot down the Korean plane only. Good job Trump" << std::endl;
					std::system("pause");
					
				}
				else if (valueIn == 1)
				{
					std::cout << "Target is hit. You shot down the Korean plane and ont other plane. Atleast we saved a lot of lives Trump" << std::endl;
					std::system("pause");
				}
				else
				{
					std::cout << "All the planes are down. At least we are safe" << std::endl;
					std::system("pause");
				}
			}
			if (randNum != valueIn3)
			{
				if (valueIn == 0)
				{
					std::cout << "Target is hit. You shot down the American cargo plane only. Get the President to the bunker now." << std::endl;
					std::system("pause");
					
				}
				if (valueIn == 1)
				{
					std::cout << "Two planes are down. They are both American. Mr. President run to the bunker. We are at Defcon 3" << std::endl;
					std::system("pause");
				}
				else
				{
					std::cout << "All the planes are down. At least we are safe" << std::endl;
					std::system("pause");
				}
			}

			}
	
			if (armed == false)
			{
				std::cout << "The missile was not armed correctly. Take cover!!!" << std::endl;
				std::system("pause");
			}
		

}