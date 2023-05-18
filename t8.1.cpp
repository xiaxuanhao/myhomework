#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	string str1; string str2;
	cin >> str1; cin >> str2;
	int ans = str1.find(str2);
	cout << ans << endl;
	system("pause");
}
