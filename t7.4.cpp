#include <iostream>
using namespace std;
void move(int n, char src, char dest, char aux) 
{
    if (n == 1) 
    {
        cout << "Move disk 1 from " << src << " to " << dest << endl;
        return;
    }
    move(n - 1, src, aux, dest);
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;
    move(n - 1, aux, dest, src);
}

int main()
{
    int N;

    cin >> N;
    move(N, 'A', 'C', 'B');
    return 0;
}