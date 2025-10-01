#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string P1, P2;
    getline(cin, P1);
    getline(cin, P2);
    string T;
    getline(cin, T);
    size_t pos = 0;
    while ((pos = T.find(P1, pos)) != string::npos) {
        T.replace(pos, P1.size(), P2);
        pos += P2.size();
    }
    cout << T;
    return 0;
}
