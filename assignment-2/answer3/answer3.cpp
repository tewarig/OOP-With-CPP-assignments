#include<iostream>
#include<stdio.h>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	Date(int dd, int mm, int yy) {
		day = dd;
		year = yy;
		if (mm >= 1 && mm <= 12)
		{
			month = mm;
		} else {
			cout << "please enter a vaild month, the value of month us reseted to 1";
			month = 1;
		}
	}

	void displayDate()
	{
		cout << day << "/" << month << "/" << year << "\n";
	}


};
int main()
{

	cout << "Enter Day you want to celebrate Binod Day \n";
	int dd, mm, yy;
	cin >> dd >> mm >> yy;
	Date binodDay(dd, mm, yy);
	cout << "Form today!!! Binod day would be celebrated on ";
	binodDay.displayDate();
	cout << " enter a date but this time enter worng month to check the program.\n";
	cin >> dd >> mm >> yy;
	Date worng(dd, mm, yy);
	worng.displayDate();
	return 0;
}
