#include<iostream>
using namespace std;

int main(void)
{
	int value = 0;
	cout << "Enter amount of money: ";
	cin >> value;
	while (value >= 50)
	{
		cout << "50 ";
		value -= 50;
	}
	while(value >= 20)
	{
		cout << "20 ";
		value -= 20;
	}
	while (value >= 10)
	{
		cout << "10 ";
		value -= 10;
	}
	while (value >= 5)
	{
		cout << "5 ";
		value -= 5;
	}
	while (value >= 1)
	{
		cout << "1 ";
		value -= 1;
	}	
	cout << endl;
	system("pause");
	return 0;
}