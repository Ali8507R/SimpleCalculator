#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "This is a simple calculator.\n";

	double Number1, Number2;
	int x;
	string response;

	do {
		cout << "\nEnter two numbers: ";
		cin >> Number1 >> Number2;

		cout << "\nChoose an Operation:\n";
		cout << "1. Addition (+)\n";
		cout << "2. Subtraction (-)\n";
		cout << "3. Multiplication (*)\n";
		cout << "4. Division (/)\n";
		cout << "5. Modulus (%)\n";
		cout << "6. Power (^)\n";
		cout << "\nEnter your choice: ";
		cin >> x;

		switch (x) {
		case 1:
			cout << "\nThe operation: " << Number1 << " + " << Number2 << " = " << Number1 + Number2 << endl;
			break;
		case 2:
			cout << "\nThe operation: " << Number1 << " - " << Number2 << " = " << Number1 - Number2 << endl;
			break;
		case 3:
			cout << "\nThe operation: " << Number1 << " * " << Number2 << " = " << Number1 * Number2 << endl;
			break;
		case 4:
			if (Number2 == 0)
				cout << "\nNot defined: Division by zero!" << endl;
			else {
				cout << "\nThe operation: " << Number1 << " / " << Number2 << " = " << Number1 / Number2 << endl;
			}
			break;
		case 5: {
			int num1 = int(Number1);
			int num2 = int(Number2);
			if (num2 != 0)
				cout << "\nThe operation: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
			else {
				cout << "\nNot defined: Modulus by zero!" << endl;
			}
		}
			break;
		case 6:
			cout << "\nThe operation: " << Number1 << " ^ " << Number2 << " = " << pow(Number1,Number2) << endl;
		}
		break;
		

		cout << "\nDo you want to calculate again? (Yes or No): ";
		cin >> response;

	} while (response == "Yes" || response == "yes");

	return 0;
}
