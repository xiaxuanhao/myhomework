#include<iostream>
using namespace std;
void tran(int m)
{
	int a[20], i;
	for (i = 0; m; i++)
	{
		a[i] = m % 8;
		m /= 8;
	}
	for (i--; i >= 0; i--)
	{
		cout << a[i];
	}
}
void main()
{
	int b;
	cin >> b;
	tran(b);
}