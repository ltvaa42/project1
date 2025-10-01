#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    if (s.size() != 10 || s[4] != '-' || s[7] != '-')
        return cout << "INCORRECT",0;
    for (int i : {0, 1, 2, 3, 5, 6, 8, 9})
        if (!isdigit(s[i])) return cout << "INCORRECT",0;
    int y = stoi(s.substr(0, 4)), m = stoi(s.substr(5,2)), d = stoi(s.substr(8,2));
    if (m < 1 || m > 12 || d < 1 || d > 31) cout<<"INCORRECT";
    else cout << y << " " << m << " " << d;
}
