#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int main() {
	//Flips the order of chara1239854cters in an integer
	cout << "This program reverses the digits in an integer.\n";
	cout << "\nEnter a positive integer: ";

	long inputInt;
	cin >> inputInt;

	string strInt = to_string(inputInt);
	reverse(strInt.begin(), strInt.end());

	std::cout << "The reversed number is " << strInt << ".\n";
}
