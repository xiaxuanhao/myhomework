#include<iostream>
using namespace std;
int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int sum = 0;
	int arr[100];
	int i = 0;
	while (1)
	{
		cin >> arr[i];
		if (arr[i] == 0 || arr[i] < 0)
			break;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		if (even(arr[j]) == 0)
			sum += arr[j];
	}
	cout << sum;
	return 0;
}