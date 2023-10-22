#include <iostream> 
#include <cmath>
// #include<iomanip>
using namespace std;
int main() {
	double P, S;
	int k, i;
	P = 0;
	i = 1;
	while (i <= 15)

	{
		S = 1;
		k = 1;
		while (k <= i)

		{
			S *= k * k + 1;
			k++;

		}
		P += S / (1 + S * S);
		i++;

	}
	cout << P << endl;
	P = 0;
	i = 1;
	do
	{
		S = 1;
		k = 1;
		do
		{
			S *= (k * k + 1);
			k++;
		} while (k <= i);
		P += S / (1 + S * S);
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 0;
	for (i = 1; i <= 15; i++)

	{
		S = 1;
		for (k = 1; k <= i; k++)

		{
			S *= k * k + 1;

		}
		P += S / (1 + S * S);

	}
	cout << P << endl;
	P = 0;
	for (i = 15; i >= 1; i--)

	{
		S = 1;
		for (k = i; k >= 1; k--)

		{
			S *= k * k + 1;
		}
		P += S / (1 + S * S);
	}
	cout << P << endl;
	return 0;
}