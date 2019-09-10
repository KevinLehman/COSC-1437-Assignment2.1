/*
Kevin Lehman - 1463553
Tarrant County College - COSC 1437 - Fall 2017
Assignment  2 - 1 Source
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Prototypes
void assignDays(string[7]);
int daysInput();

// Global Variable
int displayDay;

int main()
{
	string daysArray[7];
	

	assignDays(daysArray);
	displayDay = daysInput();

	if (displayDay == 0)
	{
		cout << "Exiting Program." << endl;
	}
	else
	{
		cout << "Day of the week " << daysArray[displayDay-1] << "." << endl;
	}

	system("Pause");
	return 0;
}

void assignDays(string daysArray[7])
{
	daysArray[0] = "Sunday";
	daysArray[1] = "Monday";
	daysArray[2] = "Tuesday";
	daysArray[3] = "Wednesday";
	daysArray[4] = "Thursday";
	daysArray[5] = "Friday";
	daysArray[6] = "Saturday";

}

int daysInput()
{
	int day;

	cout << "Enter the day of the week you wish to display. Valid Entries 1-7. 0 will exit program" << endl;
	cin >> day;

	if (day >= 0 && day <= 7)
	{
		displayDay = day;
		return displayDay;
	}
	else
	{
		cout << "Week day " << day << " is unknown." << endl;
		daysInput();
	}
}