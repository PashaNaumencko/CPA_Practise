#include<iostream>
using namespace std;
int main(void)
{
	int sys;
	float m, ft, inc, ftfloat;
	cout << "Enter the number of system:";
	cin >> sys;
	if (sys == 0)
	{
		cout << "Enter the number of meters:";
		cin >> m;
		if(m >= 0.0)
		{
			cout << (int)(m / 0.3048) << "'" << (m / 0.3048 - (int)(m / 0.3048)) * 12 << "\"" << endl;
		}
		else
		{
			cout << "Incorrect input" << endl;
		}
	}
	else if (sys == 1)
	{
		cout << "Enter the number of feet:";
		cin >> ft;
		cout << "Enter the number of inches:";
		cin >> inc;
		if (ft >= 0.0 && inc >= 0.0)
		{
			cout << ft * 0.3048 + inc * 0.0254 << "m" << endl;
		}
		else
		{
			cout << "Incorrect input" << endl;
		}		
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}