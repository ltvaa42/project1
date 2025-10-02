#include <bits/stdc++.h>
using namespace std;
int n;
string s;
void backtrack(int i) {
    if (i == n) {             
        cout << s << "\n";
        return;
    }
    s[i] = '0';               
    backtrack(i+1);
    s[i] = '1';             
    backtrack(i+1);
}
int main() {
    cin >> n;
    s = string(n, '0');  
    backtrack(0);
    return 0;
}
