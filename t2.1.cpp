#include<iostream>
using namespace std;
int main()
{
	int n = 0; int i = 0; int j = 0;
	cin >> n;
	int arr[15][15];
	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
		for (j = 0; j <= i; j++)
		{
			if (i > 1 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			if (i == j)
				arr[i][j] = 1;
		}
	}
	for (int k = 0; k < i; k++)
	{
		for (int m = 0; m <= k; m++)
		{
			cout << arr[k][m] << " ";
		}
		if (k < i - 1)
			cout << "\n";
	}
}