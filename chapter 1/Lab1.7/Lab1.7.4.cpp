#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int f1, f2;
	float result;
	cout << "Enter the numbers:" << endl;
	cin >> f1;
	cin >> f2;
	result = abs((1.0 / f1) - (1.0 / f2));
	if (result < 0.000001)
	{
		cout << "Results are equal (by 0.000001 epsilon)" << endl;		
	}
	else
	{
		cout << "Results are not equal (by 0.000001 epsilon)" << endl;
	}
	return 0;
}