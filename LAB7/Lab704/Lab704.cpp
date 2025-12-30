#include <iostream>
using namespace std;

int main() {
	int arr[] = { 10, 20, 30, 40 };
	int* p = arr;
	int n = sizeof(arr) / sizeof(arr[0]);
	int* end = p + n;
	for (int* it = p; it < end; ++it) {
		cout << *it << '\n';
	}

	return 0;
}