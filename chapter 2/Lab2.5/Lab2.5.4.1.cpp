#include<iostream>
using namespace std;

int main(void)
{
	int choose;
	double val1, val2;
	do
	{
		cout << "MENU:" << endl << "0 - exit" << endl << "1 - addition" << endl << "2 - subtraction" << endl << "3 - multiplication" << endl << "4 - division" << endl << "Your choice? ";
		cin >> choose;
		if (choose >= 0 && choose <= 4)
		{
			if (choose == 0)
			{
				cout << "Exiting the program." << endl;
				continue;
			}
			cout << "Enter a first value:";
			cin >> val1;
			cout << "Enter a second value:";
			cin >> val2;
			switch (choose)
			{
			case 1:
				cout << "Result of addition: " << val1 + val2 << endl;
				break;
			case 2:
				cout << "Result of subtraction: " << val1 - val2 << endl;
				break;
			case 3:
				cout << "Result of multiplication: " << val1 * val2 << endl;
				break;
			case 4:
				if (val2 == 0.0)
				{
					cout << "Division by zero! Please try again." << endl;
				}
				else
				{
					cout << "Result of division: " << val1 / val2 << endl;
				}
				break;
			default:
				break;
			}
		}	
		else
		{
			cout << "Incorrect input! Please try again." << endl;
		}
	} 
	while (choose != 0);
	system("pause");
	return 0;
}