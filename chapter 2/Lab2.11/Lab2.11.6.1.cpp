#include <iostream>
using namespace std;

int main(void)
{
	int currentHours, currentMinutes, someEventDuration;
	cout << "Enter number of hours: ";
	cin >> currentHours;
	cout << "Enter number of minutes: ";
	cin >> currentMinutes;
	cout << "Enter the duration of some event(in minutes): ";
	cin >> someEventDuration;
	struct Date
	{
		int hours;
		int minutes;
	} CurrentDate;
	if (currentHours >= 0 && currentHours <= 23 && currentMinutes >= 0 && currentMinutes <= 59 && someEventDuration >= 0)
	{
		CurrentDate = { currentHours, currentMinutes };
		CurrentDate.minutes += someEventDuration;
		while (CurrentDate.minutes > 59)
		{
			CurrentDate.minutes -= 60;
			CurrentDate.hours++;
			if (CurrentDate.hours > 23)
			{
				CurrentDate.hours -= 24;
			}
		}
		cout << CurrentDate.hours << ":" << CurrentDate.minutes << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}