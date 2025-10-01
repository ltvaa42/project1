#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (s.size() != 8 || s[2] != ':' || s[5] != ':') {
        cout << "INCORRECT";
        return 0;
    }
    for (int i : {0,1,3,4,6,7}) {
        if (!isdigit(s[i])) {
            cout << "INCORRECT";
            return 0;
        }
    }
    int hh = stoi(s.substr(0,2));
    int mm = stoi(s.substr(3,2));
    int ss = stoi(s.substr(6,2));
    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) {
        cout << "INCORRECT";
        return 0;
    }
    long long total = (long long)hh * 3600 + mm * 60 + ss;
    cout << total;
}
