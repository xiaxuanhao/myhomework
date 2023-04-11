#include<iostream>
using namespace std;
void tran(int m, int k)
{
	int a[20], i;
	for (i = 0; m; i++)
	{
		a[i] = m % k;
		m /= k;
	}
	for (i--; i >= 0; i--)
	{
		cout << a[i];
	}
}
void main()
{
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int b, n;
		cin >> b >> n;
		tran(b, n);
		cout << "\n";
	}
}