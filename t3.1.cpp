#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int N, m, k;
	cin >> N;
	int n = 0; int arr[10]; int j = 0; int count = 0;
	int r = 0; int result[100]; int q = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> m >> k;
		while (1)
		{
			m++;
			n = m;
			j = 0; count = 0; r = 0;
			while (n != 0)
			{
				arr[j] = n % 10;
				n /= 10;
				j++;
				count++;
			}
			count--;
			for (int l = 0; count >= 0; count--, l++)
			{
				if (arr[l] != arr[count])
				{
					r++;
				}
			}
			if (r == 0)
			{
				result[q] = m;
				q++;
			}
			if (k == q)
				break;
		}
		for (int p = 0; p < k; p++)
		{
			cout << result[p] << " ";
		}
	}
}