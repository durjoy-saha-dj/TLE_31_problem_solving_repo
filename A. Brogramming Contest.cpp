/*#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int s[n], cnt = 0, left = 0, right = 0;
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }
        while() {
            if(s[i] == 1) {
                right = i;
                cnt++;
            }
        }
    }

}*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int firstOne = -1, lastZero = -1;
        int transitions = 0;

        // Find the first occurrence of '1' and the last occurrence of '0'
        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && firstOne == -1) firstOne = i;
            if (s[i] == '0') lastZero = i;
        }

        // Count transitions between '0' and '1'
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) transitions++;
        }

        if (firstOne == -1) cout << 0 << endl;          // All '0's
        else if (lastZero == -1) cout << 1 << endl;     // All '1's
        else cout << transitions << endl;               // Count transitions
    }

    return 0;
}


