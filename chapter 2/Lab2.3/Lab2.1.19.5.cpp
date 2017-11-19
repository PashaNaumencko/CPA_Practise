#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cout << "Enter the length of the side of the square(the maximum side length is 26): ";
	cin >> n;
	if (n >= 1 && n <= 26)
	{
		cout << '+';
		for (int i = 0; i < n; i++)
			cout << '-';
		cout << '+' << endl;
		for (int i = 0; i < n; i++)
		{
			cout << '|';
			for (int j = 0; j < n; j++)
				cout << ' ';
			cout << '|' << endl;
		}
		cout << '+';
		for (int i = 0; i < n; i++)
			cout << '-';
		cout << '+' << endl;
	}
	else if (n >= 26)
	{
		cout << "Sorry, the side size is too big" << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}