#include<iostream>
using namespace std;
int fun1(int a, int b)
{
	int c = 0;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	while (b != 0)
	{
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}
int fun2(int a, int b)
{
	int m = fun1(a, b);
	a /= m; b /= m;
	return a * b;
}
int main()
{
	int a = 0; int b = 0;
	cin >> a >> b;
	int r1 = fun1(a, b);
	int r2 = fun2(a, b);
	cout << r1 << " " << r2;
	return 0;
}