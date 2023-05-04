#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[20][20];

    int row_max[20];
    int col_min[20];
    for (int i = 0; i < n; i++) {
        row_max[i] = INT_MIN;
        col_min[i] = INT_MAX;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] > row_max[i]) {
                row_max[i] = matrix[i][j];
            }
            if (matrix[i][j] < col_min[j]) {
                col_min[j] = matrix[i][j];
            }
        }
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == row_max[i] && matrix[i][j] == col_min[j]) {
                cout << i << " " << j << endl;
                found = true;
            }
        }
    }
    if (!found) 
    {
        cout << "NO" << endl;
    }
    return 0;
}