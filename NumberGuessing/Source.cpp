#include <iostream>

using namespace std;

// This function takes a number in binary form and gives the integer value
void FromBin(int n)
{
	int increment;
	int Result;
	increment = 1;
	Result = 0;
	while (n != 0)
	{
		if (n % 10 == 1) {
			Result = Result + increment;
			n = n - 1;
		}
		n = n / 10;
		increment = increment * 2;
	}
	cout << Result << " ";
}

// This function is used to print all the numbers with the specified first bits
void print(int number, int n10)
{
	for (int i = 0; i <= 1; i++)
	{
		number = number + (n10 * i);
		if (n10 == 1000000)
			FromBin(number);

		else
		{
			n10 = n10 * 10;
			print(number, n10);
			n10 = n10 / 10;
		}
		if (i == 1)
			number = number - n10;
	}

}

int main()
{
	int Number = 0;
	int N10 = 1;
	int n;

	cout << "think of a number between 128 and 0" << endl;
	int answer;

	// In here we show all the numbers with specified number of fixed bits 
	// and according to the users answer we pick new fixed bits and show the new numbers 
	while (N10 != 1000000)
	{
		N10 = N10 * 10;
		n = (N10 / 10);
		cout << "is your number one of these numbers ?\n1)yes\n2)no" << endl;
		print(Number, N10);
		cout << endl;
		cin >> answer;
		if (answer == 2)
			Number = Number + (1 * n);

		//system("cls");
	}

	n = N10;
	cout << "is this your number ?\n1)yes\n2)no " << endl;
	FromBin(Number);
	cout << endl;
	cin >> answer;
	//system("cls");
	if (answer == 1)
	{
		cout << "of course it is ... am a computer!" << endl;
	}
	else
	{
		cout << "then this is your number!!! " << endl;
		Number = Number + (1 * n);
		FromBin(Number);
		cout << "\n1)yes\n2)no" << endl;
		cin >> answer;
		//system("cls");
		if (answer == 1)
		{
			cout << "finally!!! ... I mean yes of course it is" << endl;
		}
		else
		{
			cout << "picking 128 is not a clever choice (-_-)" << endl;
		}
	}

	system("pause");
}