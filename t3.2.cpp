#include<iostream>
using namespace std;
void fun1(int r)
{
	double d = 2 * r;
	double c = 2 * 3.14 * r;
	cout << "直径=" << d << endl;
	cout << "周长=" << c << endl;
}
void fun2(int r)
{
	double a = 3.14 * r * r;
	cout << "面积=" << a << endl;
}
int main() 
{
	int r; 
	cin >> r; 
	fun1(r); fun2(r);
	return 0;
}