#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int d[n], s[n], k=999999;
        for(int i=0; i<n; i++) {
            cin >> d[i] >> s[i];
            if (k > (d[i] +( ((s[i]+1) /2) - 1))) {
                k = (d[i] +( ((s[i]+1) /2) - 1));
            }
        }
        cout << k << endl;
    }
}