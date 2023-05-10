#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void UP(string& s) {
    for (char& c : s) {
        if (islower(c)) {
            c = toupper(c);
        }
    }
}
string removeNonAlnum(string s) {
    string res = "";
    for (char c : s) {
        if (isalnum(c)) {
            res += c;
        }
    }
    return res;
}
string reformat(string s, int K) {
    UP(s);
    s = removeNonAlnum(s);
    int len = s.size();
    int groups = (len + K - 1) / K;
    if (groups <= 1) {
        return s;
    }
    string res = "";
    int firstGroup = len % K;
    if (firstGroup == 0) {
        firstGroup = K;
    }
    int count = 0;
    for (int i = len - 1; i >= 0; i--) {
        res = s[i] + res;
        count++;
        if (count == K && i != firstGroup - 1) {
            res = "-" + res;
            count = 0;
        }
    }
    return res;
}

int main() {
    string s;
    getline(cin, s);
    int K = 0;
    cin >> K;
    cout << reformat(s, K) << endl;
}