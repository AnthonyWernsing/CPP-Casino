#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void generateCards(int dealerCards[], int playerCards[])
{
	srand(time(0));

	for (int i = 0; i < 21; i++)
	{
		dealerCards[i] = rand() % 11 + 1;
		playerCards[i] = rand() % 11 + 1;
	}
}

int displayPlayerCards(int playerCards[])
{
	int temp = playerCards[0] + playerCards[1];

	cout << "Players Card Total: " << temp << endl;
	cout << playerCards[0] << endl;
	cout << playerCards[1] << endl;
	return temp;
}

int playerHit(int playerCards[], int count)
{
	int temp = 0;

	cout << "You have recieved another card: " << playerCards[count - 1] << endl;
	for (int i = 0; i < count; i++)
	{
		temp = temp + playerCards[i];
	}
	cout << "Total: " << temp << endl;
	return temp;
}

int dealerStats(int dealerCards[])
{
	int temp = dealerCards[0] + dealerCards[1];
	int count = 1;

	while (temp < 17)
	{
		count++;
		temp = dealerCards[count] + temp;
	}

	if (temp == 17 || temp == 18 || temp == 19 || temp == 20 || temp == 21)
	{
		cout << "Dealer has a " << temp << endl;
	}
	else
	{
		cout << "The dealer has busted. Grats, you win!" << endl;
	}
	return temp;
}

void blackJack()
{
	int dealerCards[21];
	int playerCards[21];
	char option = 'S';
	int playerCount = 2;
	int score = 0;
	int dealerScore;
	int temp = 1;

	generateCards(dealerCards, playerCards);
	score = displayPlayerCards(playerCards);

	while (score < 21)
	{
		cout << "Would you like to hit or stay? (H or S)" << endl;
		cin >> option;

		if (option == 'H' || option == 'h')
		{
			playerCount++;
			score = playerHit(playerCards, playerCount);
		}
		else if (option == 'S' || option == 's')
		{
			break;
		}
	}

	if (playerCount == 2 && score == 21)
	{
		cout << "Congrats. you just got a BlackJack!!!" << endl;
		temp = 0;
	}

	if (score < 22 && temp != 0)
	{
		dealerScore = dealerStats(dealerCards);
	}

	if (score > 21)
	{
		cout << "Sorry, you have busted. Better luck next time" << endl;
	}

	if (score < 22 && temp != 0)
	{
		if (dealerScore > 21)
		{
			cout << "The dealer has busted with a score of " << dealerScore << "." << endl;
		}
		else if (dealerScore > score)
		{
			cout << "Sorry, you have lost. The dealer beat you with a " << dealerScore << ". Better luck next time!" << endl;
		}
		else if (score > dealerScore && dealerScore < 22)
		{
			cout << "Congrats! You have beat the dealer with " << score << "!" << endl;
		}
		else if (score == dealerScore && dealerScore < 22)
		{
			cout << "You have tied with the dealer with a score of " << score << "." << endl;
		}
	}
}

