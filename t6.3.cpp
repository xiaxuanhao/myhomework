#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    int pos = s2.find(s1); 
    while (pos != string::npos) 
    {
        cout << pos << " ";
        pos = s2.find(s1, pos + 1);
    }
    return 0;
}