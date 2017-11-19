#include<iostream>
using namespace std;

int main(void)
{
	int n; 
	long long fib1 = 1, fib2 = 1, value = 1;
	cout << "Enter a value of n: ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 2; i < n; i++)
		{
			value = fib1 + fib2;
			fib1 = fib2;
			fib2 = value;
		}
		cout << n << "-th Fibonacci number is equal to " << value << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}	
	system("pause");
	return 0;
}