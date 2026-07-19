#include <bits/stdc++.h>
using namespace std;

int n, q;
int a[100010];
int k;

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    for(; q--; ) {
        cin >> k;
        for(int i = 1; i <= n; i ++) {
            if(k % a[i] == 0) {
                while(k % a[i] == 0) {
                    k /= a[i];
                }
            }
        }
        cout << (k > 1 ? "NO\n" : "YES\n");
    }
}