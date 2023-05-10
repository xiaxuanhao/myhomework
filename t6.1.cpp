#include<iostream>
using namespace std;
int main()
{
	int n = 0; int k = 0;
	int num1[1000]; int num2[1000];
	int count = 0; int number = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> num1[i];
		number++;
	}
	for (int j = 0; j < number; j++)
	{
		if (num1[j] > 0)
			count++;
	}
	if (count >= k)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}