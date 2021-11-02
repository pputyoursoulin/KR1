#include "Class.h"

int main() {

	if (LENGTH < 1) {
		cout << "\tError!!! change dim" << endl;
		return 0;
	}

	Autotest1();
	Autotest2();
	Autotest3();

	cout << "\tdim: " << LENGTH << endl << endl;
	Cvector v1, v2;
	int operacia;
	
	v1.input();
	cout << "\n\ta = ";
	v1.print();
	cout << endl;
	
	v2.input();
	cout << "\n\tb = ";
	v2.print();
	cout << endl;

	cout << "\n\tOperation:\n\n\t1 - Sum(+);\n\t2 - Subtraction(-);\n\t3 - Scalar product(+).\n\n\tEnter operation: ";
	cin >> operacia;
	cout << endl;

	switch (operacia) {
	case 1:
		cout << "\ta + b = ";
		(v1 + v2).print();
		break;
	case 2:
		cout << "\ta - b = ";
		(v1 - v2).print();
		break;
	case 3:
		cout << "\t(a,b) = " << v1 * v2 << endl;
		break;
	default:
		cout << "\tError!!! the operation was entered incorrectly..." << endl;
		break;
	}
	return 0;
}