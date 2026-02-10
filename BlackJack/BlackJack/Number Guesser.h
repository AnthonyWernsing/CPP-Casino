#pragma once
void number_Guesser()
{
	int temp;
	int guess = 0;
	int count = 0;

	cout << "Slect a maximum number over 100." << endl;
	cin >> temp;
	cout << endl;

	srand(time(0));

	int number = rand() % temp;

	while (guess != number)
	{
		if (guess > number)
		{
			cout << guess << " is greater than the number." << endl;
			count++;
			cout << "Please enter guess number " << count << endl;
			cin >> guess;
		}
		if (guess < number)
		{
			cout << guess << " is less than the number." << endl;
			count++;
			cout << "Please enter guess number " << count << endl;
			cin >> guess;
		}
	}

	if (guess == number)
	{
		cout << "Congrats, you guess the number " << number << " in " << count << " guesses!" << endl;
	}
}