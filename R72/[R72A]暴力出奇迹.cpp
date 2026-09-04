#include <bits/stdc++.h>
using namespace std;

int k, x;
int n, m;
int ans = 0;

int main() {
    cin >> k >> x;
    for(; k --; ) {
        cin >> n >> m;
        if(n <= x || m == 1){
            ans ++;
        }
    }
    cout << ans << endl;
}