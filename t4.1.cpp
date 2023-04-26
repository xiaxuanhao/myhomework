#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int result = 0;
	cin >> a;
	while (a != 0)
	{
		result += a % 10;
		a /= 10;
	}
	cout << result;
}
