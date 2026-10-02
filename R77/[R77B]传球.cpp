#include <bits/stdc++.h>
using namespace std;

int n, r;
int a[200010];

int main() {
    cin >> n >> r;
    for(int i = 1; i <= r; i ++) {
        for(int j = 1; j <= n; j ++) {
            if(a[j] % 2) {
                a[j + 1] ++;
                a[j] --;
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}