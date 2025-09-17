
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	double a, b, c, x, y, z, t;
	double pi = M_PI;
	cout << "введите х=";
	cin >> x;
	cout << "введите у=";
	cin >> y;
	cout << "введите z=";
	cin >> z;
	a = 2 * cos(x - (pi / 6));
	b = 0.5 + pow(sin(y), 2);
	a = a / b;
	c = (pow(z, 2)) / (3 - (pow(z, 2) / 5));
	b = 1 + c;
	t = a * b;
	cout << "результат=" << t;
	return 0;

}