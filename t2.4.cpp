#include<iostream>
using namespace std;
int main()
{
	int a, b, year, month, day, count = 0; char e, f;
	int mon[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	cin >> year >> e >> month >> f >> day;
	for (a = 1900; a < year; a++)
	{
		if (a % 100 != 0 && a % 4 == 0 || a % 400 == 0)
			count += 2;
		else
			count += 1;
	}
	for (a = 1; a < month; a++)
	{
		count += mon[a];
		if (a == 2 && year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
			count++;
	}
	count += day;
	b = count % 7;
	switch (b)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Satday";
		break;
	case 0:
		cout << "Sunday";
		break;
	}
}