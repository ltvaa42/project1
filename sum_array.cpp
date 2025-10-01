#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n;
    long long sum = 0, x;
    while (n--) { cin >> x; sum += x; }
    cout << sum;
}
