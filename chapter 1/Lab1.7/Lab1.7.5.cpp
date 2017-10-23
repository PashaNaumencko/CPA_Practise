#include <iostream>
using namespace std;

int main() 
{
	int n1, n2, n3, n4;
	cout << "Enter the numbers:" << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	if ((n1 < 1 || n1 > 255) || (n2 < 1 || n2 > 255) || (n3 < 1 || n3 > 255) || (n4 < 1 || n4 > 255))
	{
		cout << "Wrong format" << endl;
	}
	else
	{
		cout << "IP address: ";
		cout << n1 << "." << n2 << "." << n3 << "." << n4 << endl;
	}
	system("pause");
	return 0;
}