#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int startTimeHours, startTimeMinutes, endTimeHours, endTimeMinutes;
	cout << "Enter number of hours for start time: ";
	cin >> startTimeHours;
	cout << "Enter number of minutes for start time: ";
	cin >> startTimeMinutes;
	cout << "Enter number of hours for end time: ";
	cin >> endTimeHours;
	cout << "Enter number of minutes for end time: ";
	cin >> endTimeMinutes;
	struct Date
	{
		int hours;
		int minutes;
	} StartTime, EndTime, Duration;
	if(startTimeHours >= 0 && endTimeHours >= 0 && startTimeHours <= 23 && endTimeHours <= 23 &&
			startTimeMinutes >= 0 && endTimeMinutes >= 0 && startTimeMinutes <= 59 && endTimeMinutes <= 59 && endTimeHours >= startTimeHours)
	{
		if (startTimeHours == endTimeHours && startTimeMinutes > endTimeMinutes)
		{
			cout << "Incorrect input" << endl;
		}
		else
		{
			
			StartTime = { startTimeHours, startTimeMinutes };
			EndTime = { endTimeHours, endTimeMinutes };
			Duration = { endTimeHours - startTimeHours, endTimeMinutes - startTimeMinutes };
			if (Duration.minutes < 0)
			{
				Duration.minutes += 60;
				Duration.hours--;
			}
			cout << Duration.hours << ":" << Duration.minutes << endl;
		}
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}