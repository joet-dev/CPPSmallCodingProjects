/*
 * Filename:  Sorted.cpp
 * Checks if an array of int is sorted in non-decreasing order.
 */
#include <iostream>

using namespace std;

/* Function prototype */
bool IsSorted(int values[], int size) {
	for (int i = 0; i < size; i++) {
		if (size == 1) { 
			break;
		} else if (values[i] >= values[i - 1]) {
			continue;
		} else if (values[i] < values[i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {

	// test arrays	
	int values1[] = {0};
	int values2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int values3[] = {0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
	int values4[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int values5[] = {9, 9, 9, 9, 9, 9, 9, 9, 1};
	int values6[] = {1, 3, 4, 4, 7, 6, 8, 9};

	// testing
	cout << "Array 1 is " << (IsSorted(values1, (sizeof values1 / sizeof values1[0])) ? "" : "not ") << "sorted in non-decreasing order." << endl;
	cout << "Array 2 is " << (IsSorted(values2, (sizeof values2 / sizeof values2[0])) ? "" : "not ") << "sorted in non-decreasing order." << endl;
	cout << "Array 3 is " << (IsSorted(values3, (sizeof values3 / sizeof values3[0])) ? "" : "not ") << "sorted in non-decreasing order." << endl;
	cout << "Array 4 is " << (IsSorted(values4, (sizeof values4 / sizeof values4[0])) ? "" : "not ") << "sorted in non-decreasing order." << endl;
	cout << "Array 5 is " << (IsSorted(values5, (sizeof values5 / sizeof values5[0])) ? "" : "not ") << "sorted in non-decreasing order." << endl;
	cout << "Array 6 is " << (IsSorted(values6, (sizeof values6 / sizeof values6[0])) ? "" : "not ") << "sorted in non-decreasing order." << endl;

	return 0;
}


