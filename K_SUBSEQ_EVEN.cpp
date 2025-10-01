#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (!(cin >> n >> k)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    long long sum = 0;
    for (int i = 0; i < k; ++i) sum += a[i];
    long long ans = (sum % 2 == 0);
    for (int i = k; i < n; ++i) {
        sum += a[i] - a[i - k];
        if (sum % 2 == 0) ++ans;
    }
    cout << ans;
    return 0;
}
