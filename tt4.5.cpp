#include<iostream>
using namespace std;
int main()
{
	int hour, minute;
	int number = 0;
	cin >> number;
	if (number >= 800)
	{
		number -= 800;
		hour = number / 100;
		number -= hour * 100;
		minute = number / 1;
	}
	else if (number < 800 && number > 59)
	{
		number -= 800;
		number += 2400 - 40;
		hour = number / 100;
		number -= hour * 100;
		minute = number / 1;
	}
	else if (number >= 0 && number <= 59)
	{
		hour = 0;
		minute = number;
	}
	if (hour != 0)
	{
		cout << hour << minute;
	}
	else
		cout << minute;
}