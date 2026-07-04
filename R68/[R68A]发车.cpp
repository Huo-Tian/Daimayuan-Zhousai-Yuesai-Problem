#include <bits/stdc++.h>
using namespace std;

int s, k, t;
int a[1010];

int main() {
    cin >> s >> k >> t;
    a[1] = s;
    for(int i = 2; i <= 1000; i ++) {
        a[i] = a[i - 1] + k;
    }
    if(t < s) {
        cout << s - t << endl;
    } else {
        for(int i = 1; i <= 1000; i ++) {
            if(a[i] >= t) {
                cout << a[i] - t << endl;
                return 0;
            }
        }
    }
}