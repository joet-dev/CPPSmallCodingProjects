/*
 * Week 3 Problem 3 Part 1
 */

#include <iostream>

using namespace std;

int sumArray(int arr[], unsigned int arrSize) {
	int answer = 0;
	int val;

    for (int i = 0; i < arrSize; i++) {
		cout << "Input value " << i + 1 << ": ";
		cin >> val;
		arr[i] = val;
	}

	for (int i = 0; i < arrSize; i++) {
		answer += arr[i];
	}
	return answer;
}

int main() {
	int *userArr;
	int numVal;
	cout << "Input number of values to be summed: ";
	cin >> numVal;

	userArr = new int[numVal];

	int answer = sumArray(userArr, numVal);

	cout << endl;
	cout << "The calculated sum is: " << answer << endl;
}