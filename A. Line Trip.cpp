#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        vector<int> temp(n + 2);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        temp[0] = 0;
        temp[n + 1] = x;
        for(int i = 1; i < n + 1; i++) {
            temp[i] = a[i - 1];
        }

        int diff, maxDiff = 0;
        for(int i = 0; i < n + 1; i++) {
            diff = temp[i + 1] - temp[i];

            if(i == n) {
                diff *= 2;
            }

            maxDiff = max(maxDiff, diff);
        }
        cout << maxDiff << endl;
    }
}
