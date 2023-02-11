#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

const int SEC_IN_MIN = 60;
const int MONTH_IN_YEAR = 12;
const int DAY_IN_MONTH = 30;
const int HOURS_IN_DAY = 24;
const int MIN_IN_HOUR = 60;

int main()
{
	setlocale(LC_ALL, "Russian");
	long year, month, day, hours, minutes, seconds;
	long totalSec;
	cout << "Эта программа определяет количество секунд, прошедших с вашего рождения\n";
	cout << "Введите количество полных лет: ";
	cin >> year;
		cout << "Введите количество месяцев, прошедших с вашего дня рождения:";
	cin >> month;
		cout << "Введите количество дней, прошедших с ЧИСЛА вашего дня рождения: ";
	cin >> day;
	cout << "Введите количество часов, прошедших с ЧАСА вашего рождения: ";
	cin >> hours;
	cout << "Введите количество минут, прошедших с МИНУТЫ вашего рождения: ";
	cin >> minutes;

	
	totalSec = (((((year * MONTH_IN_YEAR) + month) * DAY_IN_MONTH + day) * HOURS_IN_DAY + hours) * MIN_IN_HOUR + minutes) * SEC_IN_MIN;

	cout << endl << totalSec << " секунд прошло с вашего рождения" << endl;
	
	return 0;
}
