#include <iostream>
using namespace std;

struct Date 
{
	int year;
	int month;
	int day;
};

bool isLeap(int year)
{
	if (year % 4 != 0)
	{
		return false;
	}
	else if (year % 100 != 0)
	{
		return true;
	}
	else if (year % 400 != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int monthLength(int year, int month)
{
	if (month == 2)
	{
		if (isLeap(year))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else if (month >= 1 && month <= 12)
	{
		return 31;
	}
	else
	{
		return 0;
	}
}


int dayOfYear(Date date)
{
	for(int i = 1; i < date.month; i++)
	{
		date.day += monthLength(date.year, i);
	}
	return date.day;
}

int main(void)
{ 
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	system("pause");
	return 0;
}