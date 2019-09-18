#include <iostream>

using namespace std;

int main2()
{
	float a, b, c, x;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Endless amout of solutions";
			}
			cout << "No solutions";
		}
		else {
			x = -c / b;
			cout << x;
		}
	} else {
		float d = b*b - 4*a*c;
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1 = " << x1 << ", x2 = " << x2;
	}
	return 0;
}