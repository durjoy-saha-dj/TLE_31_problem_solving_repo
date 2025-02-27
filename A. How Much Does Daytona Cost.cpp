#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, flag = 0;
        cin >> n >> k;
        int a[n];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            if(a[i] == k)
                flag++;
        }
        if(flag) {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}
