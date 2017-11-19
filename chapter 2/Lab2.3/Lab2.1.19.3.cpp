#include <iostream>
using namespace std;

int main(void)
{
	int n;
	unsigned long long value = 1;
	cout << "Enter a value of n: ";
	cin >> n;
	if (n >= 0 && n <= 63)
	{
		for (int i = 0; i < n; i++)
		{
			value *= 2;
		}
		cout << "2 to the power of " << n << " equals " << value << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}