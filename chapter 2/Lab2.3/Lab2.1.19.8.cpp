#include<iostream>
using namespace std;

int main(void)
{
	int n;
	long long factorial = 1;
	cout << "Enter a value of n: ";
	cin >> n;
	if (n >= 0)
	{
		for (int i = 1; i < n + 1; i++)
		{
			factorial *= i;
		}
		cout << "The factorial of " << n << " is equal to " << factorial << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}