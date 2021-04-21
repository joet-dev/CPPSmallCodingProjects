//Week 1 Programming exercise 1

#include <iostream>
#include <iomanip>

using namespace std;

int num = 12;
int product = 0;

int main() {
	for (int lim = 1; lim < num; lim++) {
		
		product = product + lim;
	}
	cout << (product);
}
