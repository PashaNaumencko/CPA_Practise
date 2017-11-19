#include<iostream>
using namespace std;

int main(void)
{
	long long n; 
	int Count = 0;
	cout << "Enter a value of n: ";
	cin >> n;
	if (n >= 0)
	{
		while (n != 0)
		{
			Count += n & 1;
			n = n >> 1;
		}
		cout << "Number of \"ones\" is " << Count << endl;
	}
	else
	{
		cout << "Incorrect input" << endl;
	}
	system("pause");
	return 0;
}