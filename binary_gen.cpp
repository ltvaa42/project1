#include <bits/stdc++.h>
using namespace std;
int n;
string cur;
void backtrack(int pos, bool prev1) {
    if (pos == n) {
        cout << cur << "\n";
        return;
    }
    cur[pos] = '0';
    backtrack(pos + 1, false);
    if (!prev1) {
        cur[pos] = '1';
        backtrack(pos + 1, true);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    cur.resize(n);
    backtrack(0, false);
    return 0;
}
