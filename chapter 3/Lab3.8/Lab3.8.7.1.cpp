#include <iostream>
#include <cmath>
using namespace std;

void increment(int &var, int expression = 1)
{
	var += expression;
}

void increment(float &var, int expression = 1)
{
	var += expression;
}

int main(void)
{
	int intvar = 0;
	float floatvar = 1.5;
	for(int i = 0; i < 10; i++)
		if(i % 2) 
		{   
			increment(intvar);   
			increment(floatvar, sqrt(intvar));  
		}
		else 
		{   
			increment(intvar,i);   
			increment(floatvar);  
		}
	cout << intvar * floatvar << endl;
	system("pause");
	return 0;
}