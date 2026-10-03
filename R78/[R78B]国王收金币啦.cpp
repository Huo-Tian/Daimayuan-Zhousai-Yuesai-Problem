#include <bits/stdc++.h>
using namespace std;

int k;

int main() {
    cin >> k;
    int ans = 0, get = 1;
    for(int i = 1; i <= k; i ++) {
        ans += get;
        if(sqrt(i) * sqrt(i) == i) {
            get ++;
        }
    }
    cout << ans << endl;
}