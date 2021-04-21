/*
 * File: MakeArray.cpp
 * Creates a dynamic array of size elements and return pointer.
 */

#include <iostream>

using namespace std;

/* Fucntion prototype */
int * IndexArray(int n) {
	int *intArray = new int[n];
	for (int i = 0; i < n; i++) {
		intArray[i] = i;
	}

	return intArray;
}

/* main function - program entry */

int main() {

	int *values1, *values2;

	values1 = IndexArray(10);
	for (int i = 0; i < 10; i++) {
		cout << values1[i] << " ";
	}
	cout << endl;

	cout << endl;
	values2 = IndexArray(100);
	for (int i = 0; i < 100; i++) {
		cout << values2[i] << " ";
	}
	cout << endl;


	return 0;
}

/*
 * Creates a dynamic array of int containing size elements.
 * Returns a pointer to the array.
 */
