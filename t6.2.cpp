#include<iostream>
using namespace std;
void sort(int num[], int n)
{
	int i = 0; int j = 0;
	int temp = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int n = 0; int num[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort(num,n);
	for (int j = 0; j < n; j++)
	{
		cout << num[j] << " ";
	}
	return 0;
}