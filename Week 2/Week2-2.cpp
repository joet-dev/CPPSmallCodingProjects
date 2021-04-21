#include <iostream>
#include <tgmath.h>

using namespace std;
const int DAYS_IN_WEEK = 7;

/* Enumeration for week days.  A week starts on Sunday */
enum Weekday { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

/* Function Prototypes */
// Returns the enumeration value for the day after today 
Weekday NextDay(Weekday day) {
	return Weekday((day + 1) % 7);
}

Weekday PreviousDay(Weekday day) {
	return Weekday(((day - 1 ) % 7 + 7) % 7);
}

Weekday IncrementDay(Weekday startDay, int delta) {
	return Weekday(((startDay + delta) % 7 + 7) % 7);
}

string GetDayName(Weekday);

int main() {

	Weekday today = SUNDAY;
	

	// Testing for NextDay
	cout << "NextDay - The next seven lines should display Monday to Sunday" << endl;
	for (int i = 0; i < DAYS_IN_WEEK; i++) {
		today = NextDay(today);
		cout << GetDayName(today) << endl;
	}
	

	// Testing for PreviousDay
	cout << endl;
	cout << "PreviousDay - The next seven lines should display Saturday, Friday, ... to Sunday" << endl;
	for (int i = 0; i < DAYS_IN_WEEK; i++) {
		today = PreviousDay(today);
		cout << GetDayName(today) << endl;
	}


	// Testing for IncrementDay
	cout << endl;
	cout << "IncrementDay - The next seven lines should display Monday to Sunday" << endl;
	cout << GetDayName(IncrementDay(today, 1)) << endl;
	cout << GetDayName(IncrementDay(today, 9)) << endl;
	cout << GetDayName(IncrementDay(today, 24)) << endl;
	cout << GetDayName(IncrementDay(today, -3)) << endl;
	cout << GetDayName(IncrementDay(today, -9)) << endl;
	cout << GetDayName(IncrementDay(today, -71)) << endl;
	cout << GetDayName(IncrementDay(today, 0)) << endl;

	return 0;
}

// Converts a Weekday enumeration value to a string 
string GetDayName(Weekday day) {
	switch (day) {
	case SUNDAY:
		return "Sunday";
	case MONDAY:
		return "Monday";
	case TUESDAY:
		return "Tuesday";
	case WEDNESDAY:
		return "Wednesday";
	case THURSDAY:
		return "Thursday";
	case FRIDAY:
		return "Friday";
	case SATURDAY:
		return "Saturday";
	default:
		return "Error - Out of Range";
	}
}
