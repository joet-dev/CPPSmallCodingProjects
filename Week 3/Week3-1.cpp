/*
 * MinMax.cpp
 * A program that finds the minimum and maximum values in an array.
 */

#include <iostream>

using namespace std;

/* Function prototype */
void MinMax(int arr[], int size, int &min, int &max) {
	
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			min = arr[0];
			max = arr[0];
			continue;
		}
		else if (arr[i] > max) {
			max = arr[i];
		}
		else if (arr[i] < min) {
			min = arr[i];
		}
	}
}

/* main function - program entry point */
int main() {

	int min, max;

	// test arrays	
	int values1[] = { 67, 78, 75, 70, 71, 80, 69, 86, 65, 54, 76, 78, 70, 68, 77 };
	int values2[] = { 50 };
	int values3[] = { 50, 50, 50, 50, 50, 50, 50 };

	MinMax(values1, sizeof values1 / sizeof values1[0], min, max);
	cout << "minimum = " << min << endl;
	cout << "maximum = " << max << endl;

	cout << endl;
	MinMax(values2, sizeof values2 / sizeof values2[0], min, max);
	cout << "minimum = " << min << endl;
	cout << "maximum = " << max << endl;

	cout << endl;
	MinMax(values3, sizeof values3 / sizeof values3[0], min, max);
	cout << "minimum = " << min << endl;
	cout << "maximum = " << max << endl;

	return 0;
}

/*
 * Determines minimum and maximum values in an array
 * min and max values are passed by reference ()
 */
