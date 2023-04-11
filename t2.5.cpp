#include <iostream>
#include <algorithm>
using namespace std;
char ans[105];
int main()
{
    int N, R, m, now, i;
    cin >> N >> R;
    if (N < 0) 
    {  
        cout << "-";
        N = -N;
    }
    m = 0;
    while (N)
    {
        now = N % R;
        if (now <= 9) 
        {
            ans[m++] = '0' + now;
        }
        else 
        {
            ans[m++] = 'A' + now - 10;
        }
        N /= R;
    }
    if (m == 0)
    {  
        cout << "0";
    }
    for (i = m - 1; i >= 0; i--)
    {
        cout << ans[i];
    }cout << endl;
    return 0;
}