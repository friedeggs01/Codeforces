#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double a, b, c;
    cin >> t;
    while(t--) {
        int count = 0;
        cin >> a >> b >> c;
        while(a!=b){
            // cout << a << b << c << endl;
            if (a > b) {
                if (a - b >= 2*c) {
                    a -= c;
                    b += c;
                    count++;
                } else {
                    double temp = a;
                    a -= (a-b)/2;
                    b += (temp-b)/2;
                    count++;
                }
            } else {
                if (b - a >= 2*c) {
                    a += c;
                    b -= c;
                    count++;
                } else {
                    double temp = a;
                    a += (b-a)/2;
                    b -= (b-temp)/2;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}