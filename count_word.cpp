#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string word;
    int count = 0;
    while (cin >> word) {
        count++;
    }

    cout << count;
    return 0;
}
