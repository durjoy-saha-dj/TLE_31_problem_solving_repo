#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string x, string s) {
    int n = x.length();
    int m = s.length();

    if (m > n) return false;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (x[i + j] != s[j]) {
                break;
            }
        }
        if (j == m) return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, flag = 0;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        for(int i = 1; i <= 7; i++) {
            if(isSubstring(x, s)) {
                cout << i - 1 << endl;
                flag++;
                break;
            }
            x += x;
        }
        if(flag == 0) {
            cout << -1 << endl;
        }
    }
}
