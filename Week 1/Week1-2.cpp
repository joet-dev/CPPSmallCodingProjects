//Week 1 Programming exercise 2

#include <iostream>
#include <iomanip>

using namespace std;

int posint = 4;
int value;

int main() {
	
	for (int i = 0; i < posint; i++) {
		value = value + 1 + (2 * i);
	}
	cout << (value);
}