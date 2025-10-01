#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) cout << "NO SOLUTION";
        else cout << fixed << setprecision(2) << -1.0 * c / b;
    } else {
        double d = 1.0 * b * b - 4.0 * a * c;
        if (d < 0) cout << "NO SOLUTION";
        else if (d == 0) cout << fixed << setprecision(2) << -1.0 * b / (2 * a);
        else {
            double x1 = (-b - sqrt(d)) / (2 * a);
            double x2 = (-b + sqrt(d)) / (2 * a);
            if (x1 > x2) swap(x1, x2);
            cout << fixed << setprecision(2) << x1 << " " << x2;
        }
    }
}
