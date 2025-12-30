#include <iostream>
using namespace std;

void printArray(int* p, int size) {
	for (int i = 0; i < size; ++i) {
		cout << *(p + i) << ' ';
	}
	cout << '\n';
}

void swapValue(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sortDescending(int* p, int size) {
	int* end = p + size;
	for (int* it = p; it < end - 1; ++it) {
		int* maxPtr = it;
		for (int* jt = it + 1; jt < end; ++jt) {
			if (*jt > *maxPtr) {
				maxPtr = jt;
			}
		}
		if (maxPtr != it) {
			swapValue(it, maxPtr);
		}
	}
}

int main() {
	int arr[] = { 5, 2, 9, 1, 3 };
	int size = 5;
	printArray(arr, size);
	sortDescending(arr, size);
	printArray(arr, size);
	return 0;
}