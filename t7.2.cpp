#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	int k = 0;
	cin >> x >> k;
	int result = 1;
	for (int i = 0; i < k; i++)
	{
		result *= x;
	}
	cout << result;
	return 0;
}