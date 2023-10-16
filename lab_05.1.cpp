// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b); // прототип

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double u = (pow(h(s, t), 4) + h(1, pow(s, 2) + pow(t, 2))) / (1 + pow(h(s * t, 1), 2));

	cout << "u = " << u << endl;
	return 0;
}

double h(const double a, const double b) // визначення
{
	return a / (pow(b, 2) + 1) + 1 / (pow(a, 2) + pow(b, 2));	
}