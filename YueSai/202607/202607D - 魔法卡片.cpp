#include <bits/stdc++.h>
using namespace std;

int n;
int a[100100];
int b[100010], c[100100], bc, cc;

bool cmp(int x, int y) {
    return x > y;
}

int main() {
    bc = cc = 0;
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        if(a[i] % 2) {
            c[++cc] = a[i];
        } else {
            b[++bc] = a[i];
        }
    }  
    sort(c + 1, c + cc + 1, cmp);
    sort(b + 1, b + bc + 1);
    for(int i = 1; i <= cc; i ++) {
        cout << c[i] << " ";
    }
    for(int i = 1; i <= bc; i ++) {
        cout << b[i] << " ";
    }
}