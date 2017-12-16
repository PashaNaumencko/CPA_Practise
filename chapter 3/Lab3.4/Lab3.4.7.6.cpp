#include <iostream>
using namespace std;

bool isPrime(int num) 
{
	if (num == 0 || num == 1)
	{
		return false;
	}	
	if (num == 2)
	{
		return true;
	}
	bool b = false;
	for (int i = 2; i < num; i++) 
	{
		if(num % i == 0)
		{
			b = false;
			break;
		}
		else
		{
			b = true;
		}
	}
	return b;
}

int main(void)
{
	for (int i = 0; i <= 23; i++)
		if (isPrime(i))
			cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}