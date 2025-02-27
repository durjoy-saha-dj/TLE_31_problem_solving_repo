#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, flag = 1, mn = INT_MAX;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        if(A[i] == 0){
            cout << 0 << endl;
            flag = 0;
            break;
        }
        mn = min(mn, abs(A[i]));
    }

    if(flag)
        cout << mn << endl;
}
