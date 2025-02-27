#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, cnt = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<ll, ll> frequency_map;
        for(int i = 0; i < n; i++) {
            frequency_map[a[i]]++;
        }

        if(frequency_map.size() >= 3) {
            cout << "No" << endl;
        }

        else {
            ll freq_1 = frequency_map.begin() -> second;
            ll freq_2 = frequency_map.rbegin() -> second;

            if(freq_1 == freq_2) {
                cout << "Yes" << endl;
            }
            else if(n % 2 == 1 && abs(freq_1 - freq_2) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    }
}
