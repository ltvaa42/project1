#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    while (getline(cin, line)) {
        for (char &c : line) c = toupper(c);
        cout << line << "\n";
    }
    return 0;
}
