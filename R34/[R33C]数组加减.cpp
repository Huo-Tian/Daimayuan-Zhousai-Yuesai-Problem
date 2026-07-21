#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, q;
int a[100010], b[100010];
ll ac, bc;

int main() {
    ac = bc = 0;
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        ac += a[i];
    }
    for(int j = 1; j <= n; j ++) {
        cin >> b[j];
        bc += b[j];
    }
    
}