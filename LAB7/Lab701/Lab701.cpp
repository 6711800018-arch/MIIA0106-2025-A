#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int* p = &x;
	cout << "x = " << x << '\n';
	cout << "*p = " << *p << '\n';

	return 0;
}