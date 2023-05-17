#include<iostream>
using namespace std;
int main()
{
	string binary;
	cin >> binary;
	string reversed;
	for (int i = binary.length() - 1; i >= 0; i--)
	{
		reversed += binary[i];
	}
	cout << reversed << endl;
	return 0;
}