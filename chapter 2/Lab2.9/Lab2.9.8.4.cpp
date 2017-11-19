#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean = 0.0;
	double HarmonicMean = 0.0;
	double GeometricMean = 1.0;
	double RootMeanSquare = 0.0;
	for (int i = 0; i < n; i++)
	{
		ArithmeticMean += vector[i];
		HarmonicMean += 1.0 / vector[i];
		GeometricMean *= vector[i];
		RootMeanSquare += pow(vector[i], 2);
	}
	cout << "Arithmetic Mean = " << ArithmeticMean / n << endl;
	cout << "Harmonic Mean   = " << n / HarmonicMean   << endl;
	cout << "Geometric Mean  = " << pow(GeometricMean, 1.0 / n)  << endl;
	cout << "RootMean Square = " << sqrt(RootMeanSquare / n) << endl;
	cout << endl;
	system("pause");
	return 0;
}