#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long modpow(long long a, long long e){
    long long r = 1;
    for (; e; e >>= 1) { 
        if (e & 1) r = r * a % MOD; a = a * a % MOD; 
        }
    return r;
}
int main(){
    long long k, n; 
    if (!(cin >> k >> n)) return 0;
    if (k > n) { 
        cout << 0; return 0; 
        }          
    k = min(k, n - k);                          
    long long C = 1;
    for (long long i = 1; i <= k; ++i) {
        C = C * ((n - k + i) % MOD) % MOD;       
        C = C * modpow(i, MOD - 2) % MOD;        
    }
    cout << C;
}
