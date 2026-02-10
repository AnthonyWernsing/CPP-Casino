#pragma once
void dice()
{
	srand(time(0));
	int player = rand() % 6 + 1;
	int dealer = rand() % 6 + 1;
	int option;

	cout << "You got a " << player << endl;
	cout << "Opponent got a " << dealer << endl;

	if (player > dealer)
	{
		cout << "Congrats, you have beat your opponent!" << endl;
	}
	else if (player < dealer)
	{
		cout << "Sorry, you have lost. Better luck next time!" << endl;
	}
	else if (player == dealer)
	{
		cout << "You have tied!" << endl;
	}
}