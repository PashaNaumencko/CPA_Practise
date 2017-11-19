#include <iostream>
using namespace std;

int main(void)
{
	double matrix[][4] = 
	{ 
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	/*{  
		{ 1, 2, 3, 4 },
		{ 2, 2, 3, 1 },
		{ 3, 3, 3, 2 },
		{ 4, 1, 2, 4 } 
	};*/
	double transmatrix[4][4];
	int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	bool issymmetric = true;
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			transmatrix[i][j] = matrix[j][i];
		}
	}
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			if(transmatrix[i][j] == matrix[i][j])
			{
				issymmetric = true;
			}
			else
			{
				issymmetric = false;
				break;
			}
		}
	}
	/*for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			cout << transmatrix[i][j] << " ";
		}
		cout << endl;
	}*/
	if(issymmetric)
		cout << "The matrix is symmetric" << endl;
	else
		cout << "The matrix is not symmetric" << endl;
	system("pause");
	return 0;
}