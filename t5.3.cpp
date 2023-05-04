#include<iostream>
using namespace std;
int main()
{
	int arr[200]; char a = 0;
	int num1 = 0; int num2 = 0;
	int i = 0;
	cin >> num1 >> a >> num2;
	while (1)
	{
		arr[i] = (num1 * 10) / num2;
		num1 = (num1 * 10) % num2;
		if ((arr[i] == 0 && (num1 * 10) / num2 == 0) || i > 200)
		{
			break;
		}
		i++;
	}
	cout << " 0.";
	for (int j = 0; j < i && j < 200; j++)
	{
		cout << arr[j];
	}
	return 0;
}