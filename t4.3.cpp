#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	if (N >= 1 && N <= 10)
	{
		cout << "Children";
	}
	else if (N >= 11 && N <= 20)
	{
		cout << "Teenagers";
	}
	else if (N >= 21 && N <= 40)
	{
		cout << "Youth";
	}
	else if (N >= 41 && N <= 50)
	{
		cout << "middle-age";
	}
	else if (N >= 51 && N <= 80)
	{
		cout << "Elderly";
	}
	else if (N >= 81 && N <= 100)
	{
		cout << "Old man";
	}
}