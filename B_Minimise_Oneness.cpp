#include <bits/stdc++.h>
using namespace std;

string generateString(int n) {
    string s;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            s += '0';
        } else {
            s += '1';
        }
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = generateString(n);
        cout << s << std::endl;
    }
    return 0;
}
