#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n);
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if ( a[i] % 2 == 0 ) even ++;
        else odd ++;
    }
    cout << odd << " " << even;
}
