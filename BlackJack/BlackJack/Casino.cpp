#include "Files.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	char game = 5;

	while (game != '0')
	{
		cout << "Please enter which game you would like to play!" << endl;
		cout << "0.) Terminate program." << endl << "1.) BlackJack" << endl << "2.) Random Number Guessing Game" << endl << "3.) Dice" << endl;
		cin >> game;

		if (game == '1')
		{
			cout << endl;
			blackJack();
			cout << endl;
		}
		if (game == '2')
		{
			cout << endl;
			number_Guesser();
			cout << endl;
		}
		if (game == '3')
		{
			cout << endl;
			dice();
			cout << endl;
		}
	}
}