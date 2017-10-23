#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	cout << "¬вед≥ть п'€ть чисел:" << endl;
	float f1, f2, f3, f4, f5;
	cin >> f1;
	cin >> f2;
	cin >> f3;
	cin >> f4;
	cin >> f5;
	cout << endl;
	cout << f1 << endl;
	cout << fixed << setprecision(2) << f2 << endl;
	cout << fixed << setprecision(6) << f3 << endl;
	cout << fixed << setprecision(2) << f4 << endl;
	cout << (int)f5 << endl;
}