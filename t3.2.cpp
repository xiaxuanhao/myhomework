#include<iostream>
using namespace std;
void fun1(int r)
{
	double d = 2 * r;
	double c = 2 * 3.14 * r;
	cout << "ֱ��=" << d << endl;
	cout << "�ܳ�=" << c << endl;
}
void fun2(int r)
{
	double a = 3.14 * r * r;
	cout << "���=" << a << endl;
}
int main() 
{
	int r; 
	cin >> r; 
	fun1(r); fun2(r);
	return 0;
}