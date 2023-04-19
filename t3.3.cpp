#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
struct Student {
    string name; 
    double regular; 
    double final; 
    double total; 
};
bool compare(Student a, Student b) {
    return a.total > b.total;
}

int main() {
    int N; 
    cin >> N;
    vector<Student> students(N); 
    for (int i = 0; i < N; i++) {
        cin >> students[i].name;
        cin >> students[i].regular;
        cin >> students[i].final;
        students[i].total = students[i].regular * 0.4 + students[i].final * 0.6;
    }
    sort(students.begin(), students.end(), compare);
    for (int i = 0; i < N; i++) {
        cout << fixed << setprecision(2) << students[i].name << " " << students[i].regular << " " << students[i].final << " " << students[i].total;
        cout << "\n";
    }
    return 0;
}