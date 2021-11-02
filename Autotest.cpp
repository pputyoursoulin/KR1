#include "Class.h"

void Autotest1(void) {
	double ar1[LENGTH], ar2[LENGTH];
	for (int i = 0; i < LENGTH; i++) {
		ar1[i] = 1;
	}
	for (int i = 0; i < LENGTH; i++) {
		ar2[i] = - 1;
	}
	Cvector u(ar1), m(ar2);
	Cvector s;
	s = u + m;
	bool proverka = true;
	for (int i = 0; i < LENGTH; i++) {
		if (s.vector[i] == 0) {
			proverka = true;
			continue;
		}
		else {
			proverka = false;
			break;
		}
	}

	if (proverka) {
		cout << "Autotest1 passed..." << endl << "-----" << endl;
	}
	else {
		cout << "Autotest1 failed..." << endl << "-----" << endl;
	}
}

void Autotest2(void) {
	double ar1[LENGTH], ar2[LENGTH];
	for (int i = 0; i < LENGTH; i++) {
		ar1[i] = 3;
	}
	for (int i = 0; i < LENGTH; i++) {
		ar2[i] = 2;
	}
	Cvector u(ar1), m(ar2);
	Cvector r;
	r = u - m;
	bool proverka = true;
	for (int i = 0; i < LENGTH; i++) {
		if (r.vector[i] == 1) {
			proverka = true;
			continue;
		}
		else {
			proverka = false;
			break;
		}
	}

	if (proverka) {
		cout << "Autotest2 passed..." << endl << "-----" << endl;
	}
	else {
		cout << "Autotest2 failed..." << endl << "-----" << endl;
	}
}

void Autotest3(void) {
	double ar1[LENGTH], ar2[LENGTH];
	for (int i = 0; i < LENGTH; i++) {
		ar1[i] = 1;
	}
	for (int i = 0; i < LENGTH; i++) {
		if (i % 2 == 0) {
			ar2[i] = 1;
		}
		else {
			ar2[i] = -1;
		}
	}
	Cvector u(ar1), m(ar2);
	double scal = u * m;
	bool proverka;
	if ((scal == 0) || (scal == 1)) {
		proverka = true;
	}
	else {
		proverka = false;
	}

	if (proverka) {
		cout << "Autotest3 passed..." << endl << "-----" << endl << endl;
	}
	else {
		cout << "Autotest3 failed..." << endl << "-----" << endl << endl;
	}
}