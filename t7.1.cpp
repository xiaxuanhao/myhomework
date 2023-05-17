#include<iostream>
#include<string>
using namespace std;

int main()
{
	char c;
	int flag = 0; int num = 0;
	while (1)
	{
		c = getchar();
		if (flag && c == ' ')
			continue;
		flag = 0;
		if (c == '.')
		{
			cout << num << " ";
			break;
		}
		if (c == ' ')
		{
			cout << num << " ";
			num = 0;
			flag = 1;
		}
		else
			num++;
	}
	return 0;
}