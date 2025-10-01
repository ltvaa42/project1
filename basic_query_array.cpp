#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n + 1);
    long long S = 0;
    int gmin = INT_MAX, gmax = INT_MIN;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        S += a[i];
        gmin = min(gmin, a[i]);
        gmax = max(gmax, a[i]);
    }

    string tmp;
    cin >> tmp;
    string line;
    getline(cin, line);
    while (getline(cin, line)) {
        if (line == "***") break;
        if (line.empty()) continue;
        istringstream iss(line);
        string cmd;
        iss >> cmd;
        if (cmd == "find-max") {
            cout << gmax << "\n";
        } 
        else if (cmd == "find-min") {
            cout << gmin << "\n";
        } 
        else if (cmd == "sum") {
            cout << S << "\n";
        } 
        else if (cmd == "find-max-segment") {
            int l, r;
            iss >> l >> r;
            int mx = INT_MIN;
            for (int i = l; i <= r; i++) {
                mx = max(mx, a[i]);
            }
            cout << mx << "\n";
        }
    }
    return 0;
}
