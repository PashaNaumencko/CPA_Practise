#include <iostream>
using namespace std;

int main(void)
{
	int c0;
	int counter = 0;
	cout << "Enter a number:";
	cin >> c0;
	if (c0 > 0)
	{
		do
		{
			if (c0 % 2 == 0)
			{
				c0 /= 2;
			}
			else if (c0 % 2 == 1)
			{
				c0 = 3 * c0 + 1;
			}
			cout << c0 << endl;
			counter++;
		} 
		while (c0 != 1);
		cout << "steps = " << counter << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}