#include<iostream>
using namespace std;

int main(void)
{
	int h, halfbaselength;
	cout << "Enter the height of the pyramid: ";
	cin >> h;
	if (h > 2 && h < 9)
	{
		halfbaselength = 8;
		for (int i = 0; i < h; i++) 
		{
			for (int j = 0; j <  6 * halfbaselength; j++)
			{
				if (j == halfbaselength - i || j == halfbaselength + i || j == halfbaselength - i + 16 || j == halfbaselength + i + 16 || j == halfbaselength - i + 32 || j == halfbaselength + i + 32) 
				{
					cout << "*";
				}
				else if (i == h - 1 && (j < halfbaselength + h && j > halfbaselength - h || j < halfbaselength + h + 16 && j > halfbaselength - h + 16 || j < halfbaselength + h + 32 && j > halfbaselength - h + 32))
				{
					cout << "*";
				}
				else 
				{ 
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}