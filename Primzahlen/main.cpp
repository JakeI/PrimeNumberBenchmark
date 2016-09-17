#include <iostream>
#include <conio.h>

#include <ctime>

using namespace std;

const int steps = 1000000;

bool isPrime(int a);

int main() {

	long long t = (long long)time(0);

	unsigned int countPrime = 0;
	for (int i = 0; i < steps; i++) {
		if (isPrime(i)) {
			countPrime++;
		}
	}

	long long deltaT = ((long long)time(0)) - t;
	cout << "Prime numbers found: " << countPrime << " Time needed: " << deltaT << endl;

	_getch();
	return 0;
}

bool isPrime(int a) {
	int a2 = a / 2;
	for (int i = 2; i <= a2; i++) {
		if ((a%i) == 0) {
			return false;
		}
	}
	return true;
}