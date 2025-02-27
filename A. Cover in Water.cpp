#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0, dot = 0, flag = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '.') {
                cnt++;
                dot++;

                if(cnt == 3) {
                    cout << 2 << endl;
                    flag = 1;
                    break;
                }
            }
            else if(s[i] == '#'){
                cnt = 0;
            }
        }

        if(flag == 0) {
            cout << dot << endl;
        }
    }
}
