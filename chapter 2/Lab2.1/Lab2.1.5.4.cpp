#include <iostream>
using namespace std;
int main(void)
{
	int year, month, day;
	cout << "Enter a year:";
	cin >> year;
	cout << "Enter a month:";
	cin >> month;
	cout << "Enter a day:";
	cin >> day;
	if (year >= 1900 && year <= 2100 && month >= 1 && month <= 12 && day >= 1 && day <= 31)
	{
		month -= 2;
		if (month < 0) 
		{
			month += 12;
			year--;
		}
		month = month * 83 / 32;
		month += day;
		month += year;
		month += year / 4;
		month -= year / 100;
		month += year / 400;
		month = month % 7;
		cout << "A weekday number is " << month << endl;
	}
	else 
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}