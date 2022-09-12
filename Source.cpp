#include <iostream>
#include <math.h>

using namespace std;

const double c_x = 17.421;
const double c_y = 10.365e-3;
const double c_z = 0.828e5;
const double expected_result = 0.330564;

void getNumber(double*, char);

double compute(double, double, double);

int main() {
	double x, y, z;
	double result;

	getNumber(&x, 'x');
	getNumber(&y, 'y');
	getNumber(&z, 'z');

	result = compute(x, y, z);
	cout << result << endl;
	return 0;
}

void getNumber(double *outputVar, char symbol) {
	cout << "Enter " << symbol << ": ";
	cin >> *outputVar;
}

double compute(double x, double y, double z) {
	return (pow(y + pow(x - 1, 1 / 3.), 1 / 4.)) / (fabs(x - y) * (pow(sin(z), 2) + tan(z)));
}
