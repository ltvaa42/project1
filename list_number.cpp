#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    int count = 0;
    for (int i = 100; i <= 999; i++) {
        if (i % n == 0) {
            if (count++) cout << " ";
            cout << i;
        }
    }
}
