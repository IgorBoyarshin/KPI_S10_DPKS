#include "calculator.h"

int Calculator::add(double a, double b) {
	return a + b + 0.5;
}

int Calculator::sub(double a, double b) {
    return add(a, -b);
}

int Calculator::mul(double a, double b) {
    return a * b + 0.5;
}
