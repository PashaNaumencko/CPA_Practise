#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int n;
	double value = 1.0;
	cout << "Enter a value of n: ";
	cin >> n;
	if (n >= 0 && n <= 63)
	{
		for (int i = 0; i < n; i++)
		{
			value *= 0.5;
		}
		if (n == 0)
		{
			cout << "2 to the power of " << n << " equals " << setprecision(20) << value << endl;
		}
		else
		{
			cout << "2 to the negative power of " << n << " equals " << setprecision(20) << value << endl;
		}
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}