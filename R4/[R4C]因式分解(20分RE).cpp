#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<ll, ll> a[2001000];
int n;
long long a[1000010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        int x;
        cin >> x;
        int sum = x;
        for(int j = 2; j <= sqrt(sum); j ++) { 
            if(x % j == 0) {
                while(x % j == 0) {
                    a[j]++, x /= j;
                    //cout << i << " " << j << "++\n";
                }
            }
        }
        a[x] ++;
    }
    for(int i = 2; i <= 100000; i ++) {
        if(a[i] >= 1) {
            printf("%d %lld ", i, a[i]);
        }
    }
}