//Week 1 Programming exercise 4

#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int largestVal = 0;
int value = 1;

int main() {

	while (value != 0) {
		cout << "Enter positive integer: ";
		cin >> value;
		if (value > largestVal) {
			largestVal = value;
		}
	}
	cout << "The largest value entered was " << largestVal;
}