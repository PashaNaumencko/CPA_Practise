#include <iostream>
using namespace std; 

int main(void) 
{
	int year; 
	cout << "Enter a year: "; 
	cin >> year;
	if (year < 1582)
	{
		cout << "This year does not belong to the Gregorian era" << endl;
	}
	else if (year % 4 != 0)
	{
		cout << "Common year" << endl;
	}
	else if (year % 100 != 0) 
	{
		cout << "Leap year" << endl;
	}
	else if (year % 400 != 0) 
	{
		cout << "Common year" << endl;
	}
	else
	{
		cout << "Leap year" << endl;
	}
	system("pause");
	return 0;
}