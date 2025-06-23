
#include <iostream>
using namespace std;

int main()
{
	double Number1, Number2;
	char x;
	cout << "This is a simple calculator .\n";
	cout << "\nEnter two numbers : ";
	cin >> Number1 >> Number2;
	cout << endl;

	cout << "Enter an Operation ( + , - , * , / ) : ";
	cin >> x;
	cout << endl;

	if (x == '+') {
		cout << "The operation : " << Number1 << x << Number2 << '=' << Number1 + Number2 << endl;
	}
	else if (x == '-') {
		cout << "The operation : " << Number1 << x << Number2 << '=' << Number1 - Number2 << endl;
	}
	else if (x == '*') {
		cout << "The operation : " << Number1 << x << Number2 << '=' << Number1 * Number2 << endl;
	}
	else if (x == '/') {
		if (Number2 == 0) {
			cout << "Not defined : Division by zero!" << endl;
		}
		else {
			cout << "The operation : " << Number1 << x << Number2 << '=' << Number1 / Number2 << endl;

		}
	}
	else {
		cout << "Not defined";
	}
}

