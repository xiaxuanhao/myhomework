#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n = 6;
        int sum = 0;
        int square_sum = 0;
        double mean;
        double variance;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            square_sum += x * x;
        }
        mean = (double)sum / n;
        variance = (double)square_sum / n - mean * mean;
        cout << fixed << setprecision(2) << mean << " " << variance << endl;
    }
    return 0;
}