#include<iostream>
using namespace std;
int main()
{
	int guessnumber = 6;
	int number;
	bool isguessed = false;
	int counter = 1;
	cout << "I have already input an int from 1 to 10,you guess it" << endl;
	while (isguessed == false && counter <= 3)
	{
		cout << "Enter a number ";
		cin >> number;
		if (number == 6)
			isguessed = true;
		else if (number > 6 && counter < 3)
			cout << "Wrong,a bit bigger" << endl;
		else if (number < 6 && counter < 3)
			cout << "Wrong,a bit smaller" << endl;
		if (isguessed == false && 3 - counter > 1)
			cout << "You have " << 3 - counter << "  chances" << endl;
		else if (isguessed == false && 3 - counter == 1)
			cout << "You have " << 3 - counter << "  chance" << endl;
		else if (isguessed == false && 3 - counter == 0)
			cout << "You lose" << endl;
		else
			cout << "Congratulations" << endl;
		counter++;
	}
	system("pause");
	return 0;
}