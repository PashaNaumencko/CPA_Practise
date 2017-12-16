#include <iostream>
using namespace std;

int main(void)
{
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	//int vector[] = { 1, 2, -5, 10, 13, -10, 6, 11, -6 };
	int n = sizeof(vector) / sizeof(vector[0]);
	int *ptr = vector, minvalue = *ptr;
	for (int i = 0; i < n; i++) 
	{
		if (*(ptr + i) < minvalue)
		{
			minvalue = *(ptr + i);
		}
	}
	cout << "The min value of vector is " << minvalue << endl;
	system("pause");
	return 0;
}