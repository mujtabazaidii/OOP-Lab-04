#include<iostream>
using namespace std;
class Date {
	int day, month, year;
public:
	Date() {
		day = 1;
		month = 1;
		year = 1926;
	}
	void Print() {
		cout << day << " / " << month << " / " << year << ".";
	}
	Date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	void Input() {
		cout << endl;
		cout << "Enter Date" << endl;
		cin >> day >> month >> year;
	}
	void setdate(int d) {
		day = d;
	}
	void setmonth(int m) {
		month = m;
	}
	void setyear(int y) {
		year = y;
	}
	int getdate() {
		return day;
	}
	int getmonth() {
		return month;
	}
	int getyear() {
		return year;
	}
	int compare(Date d4) {
		cout << endl << endl << "Comparison" << endl;
		if (day > d4.day) {
			return 1;
		}
		else if(day < d4.day) {
			return -1;
		}
		else {
			return 0;
		}
	}
	void dateIncrement(int m) {
		month = m + 1;
	}
	~Date() {
		cout << endl;
	}
};
int main(){
	Date date1;
	cout << "Date Format" << endl;
	date1.Print();
	cout << endl << endl;
	cout << "Independence Day" << endl;
	Date Independenceday(14,8,2018);
	Independenceday.Print();
	cout << endl;
	Date d1;
	d1.Input();
	cout << endl << "Your Given Date is : ";
	d1.Print();
	cout << endl;
	Date xmasDay;
	xmasDay.setdate(25);
	xmasDay.setmonth(12);
	xmasDay.setyear(2018);
	cout << endl << "Xmas Day : ";
	cout << xmasDay.getdate() << " / " << xmasDay.getmonth() << " / " << xmasDay.getyear() << endl;
	cout << endl;
	Date d2(15, 07, 2018);
	xmasDay = d2;
	cout << endl;
	cout << "XmasDay Equal to Other Date " << endl << endl;
	xmasDay.Print();
	Date d5;
	int a =d5.compare(d2);
	cout << a;
	cout << endl;
	cout << endl;
	cout << "Previous Date" << endl;
	d2.Print();
	cout << endl << "Incremented Month " << endl;
	d2.dateIncrement(7);
	d2.Print();
	cout << endl << endl;
		return 0;
}
