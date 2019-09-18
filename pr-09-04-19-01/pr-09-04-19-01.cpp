#include <iostream>

using namespace std;

void task1() {
	cout << "Artemiy";
}



void task2() {
	float a, b;
	cout << "Enter two numders through space:";
	cin >> a >> b;
	cout << a << " + " << b << " = ";
	cout << a + b << "\n";
	cout << a << " - " << b << " = ";
	cout << a - b << "\n";
	cout << a << " * " << b << " = ";
	cout << a * b << "\n";

	if (b != 0) {
		cout << a << " / " << b << " = ";
		cout << a / b;
	}
	else
		cout << "Cannot divide by B cause it's zero";
}



void task3() {
	float b, c, x;
	cout << "Enter B and C from bx+c=0 eqation through space:";
	cin >> b >> c;
	cout << " \nThe answer is: ";
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
}



void task4() {
	float a, b, c, x;
	cout << "Enter A, B and C from ax^2+bx+c=0 eqation through space:";
	cin >> a >> b >> c;
	cout << " \nThe answer is: ";
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
	}
	else {
		float d = b * b - 4 * a * c;
		if (d < 0) {
			cout << "No solutions";
		}
		else if (d == 0) {
			x = -b / (2 * a);
			cout << "x = " << x;
		}
		else {
			float x1 = (-b + sqrt(d)) / (2 * a);
			float x2 = (-b - sqrt(d)) / (2 * a);
			cout << "x1 = " << x1 << ", x2 = " << x2;
		}
	}
}



bool task5support(char input) {
	if ((input == 'Y') || (input == 'y')) {
		return true;
	}
	else if ((input == 'N') || (input == 'n')) {
		return false;
	}
	else {
		cout << "ERROR: wrong answer type. Parameter set to FALSE. \n";
		return false;
	}
}
void task5() {
	char input;
	bool timeIsDay, curtainIsOpened, lampIsOn;

	cout << "Is it day now? [Y/N] \n";
	cin >> input;
	timeIsDay = task5support(input);

	cout << "Is it curtain opened? [Y/N] \n";
	cin >> input;
	curtainIsOpened = task5support(input);

	cout << "Is it lamp on? [Y/N] \n";
	cin >> input;
	lampIsOn = task5support(input);

	if (timeIsDay) {
		if (curtainIsOpened) {
			cout << "The room is bright";
		} else {
			if (lampIsOn) {
				cout << "The room is bright";
			} else {
				cout << "The room is dark";
			}
		}
	} else {
		if (lampIsOn) {
			cout << "The room is bright";
		}
		else {
			cout << "The room is dark";
		}
	}
}


int main()
{
	task5();
	return 0;
}



