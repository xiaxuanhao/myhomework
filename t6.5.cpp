#include<iostream>
#include<string>
using namespace std;
int main()
{
	char num[100];
	cin.getline(num, 100);
	int l = strlen(num);
	int i = 0;
	for (i = 0; i < l; i++)
	{
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C')
			cout << 2;
		else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
			cout << 3;
		else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I')
			cout << 4;
		else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L')
			cout << 5;
		else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O')
			cout << 6;
		else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S')
			cout << 7;
		else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V')
			cout << 8;
		else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z')
			cout << 9;
	}
	return 0;
}