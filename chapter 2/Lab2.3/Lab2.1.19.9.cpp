#include<iostream>
using namespace std;

int main(void)
{
	long long n;
	cout << "Enter a value of n: ";
	cin >> n;
	if (n > 0 && n % 2 == 1)
	{
		cout << "Search number is equal to " << n * n - 2 * (n - 1) << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}