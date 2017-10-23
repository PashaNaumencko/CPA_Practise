#include<iostream>
using namespace std;
int main(void)
{
	bool answer = false;
	int value;
	cout << "Enter a value: ";
	cin >> value;
	if ((value >= 0 && value < 10) || (2 * value < 20 && (value - 2) > -2) || ((value - 1) > 1 && (value / 2) < 10) || (value == 111))
		answer = true;
	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
	return 0;
}