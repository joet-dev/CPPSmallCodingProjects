//Week 1 Programming exercise 3

#include <iostream>
#include <iomanip>

using namespace std;

double value;
int numfeet;
double numinches;
const float INCHESMULTI = 0.0254;
const float FEETMULTI = 12;


int main() {
	//Value input
	cout << "Enter a value for conversion (units in meters): ";
	cin >> value;

	value = value / INCHESMULTI;
	cout << "In inches: " << value << "\n";
	
	numfeet = value / FEETMULTI;
	numinches = value - (numfeet * 12);
	cout << "Measurement in feet and inches: " << numfeet << " ft " << numinches << "in";
}