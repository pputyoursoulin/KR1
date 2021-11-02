#pragma once
#include<iostream>
#include<string>
#define LENGTH 3
using namespace std;

void Autotest1(void);
void Autotest2(void);
void Autotest3(void);

class Cvector {
public:
	double vector[LENGTH];

	Cvector() {
		for (int i = 0; i < LENGTH; i++) {
			vector[i] = 0;
		}
	}

	Cvector(const double *arr) {
		for (int i = 0; i < LENGTH; i++) {
			vector[i] = arr[i];
		}
	}

	Cvector &operator = (const Cvector &a) {
		for (int i = 0; i < LENGTH; i++) {
			this->vector[i] = a.vector[i];
		}
		return *this;
	}

	Cvector operator + (const Cvector &a) {
		Cvector sum;
		for (int i = 0; i < LENGTH; i++) {
			sum.vector[i] = vector[i] + a.vector[i];
		}
		return sum;
	}

	Cvector operator - (const Cvector &a) {
		Cvector raz;
		for (int i = 0; i < LENGTH; i++) {
			raz.vector[i] = vector[i] - a.vector[i];
		}
		return raz;
	}

	double operator * (const Cvector &a) {
		double scal = 0;
		for (int i = 0; i < LENGTH; i++) {
			scal += vector[i] * a.vector[i];
		}
		return scal;
	}

	void input() {
		cout << "\tEnter the coordinates: ";
		for (int i = 0; i < LENGTH; i++) {
			cin >> vector[i];
		}
	}

	void print() {
		cout << "(";
		for (int i = 0; i < LENGTH; i++) {
			if (i != 0) {
				cout << ",";
			}
			cout << vector[i];
		}
		cout << ")" << endl;
	}
};