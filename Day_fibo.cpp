#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    long long a0 = 0, a1 = 1;
    for (int i = 2; i < n; i++) {
        long long temp = a0 + a1;
        a0 = a1;
        a1 = temp;
    }
    cout << a1;
}
