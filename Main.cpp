#include "Class.h"

int main() {
	setlocale(LC_ALL, "ru");

	if (LENGTH < 1) {
		cout << "\tОшибка!!! Размерность векторного пространства некорректна..." << endl;
		return 0;
	}

	Autotest1();
	Autotest2();
	Autotest3();

	cout << "\tРазмерность векторного пространства: " << LENGTH << endl << endl;
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

	cout << "\n\tВыберите операцию над векторами:\n\n\t1 - Сумма(+);\n\t2 - Разность(-);\n\t3 - Скалярное произведение(+).\n\n\tОперация: ";
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
		cout << "\t(a,b) = " << v1 * v2;
		break;
	default:
		cout << "\tОшибка!!!Некорректно введена операция..." << endl;
		break;
	}
	return 0;
}