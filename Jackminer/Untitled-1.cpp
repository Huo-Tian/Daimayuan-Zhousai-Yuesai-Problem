#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> b;
vector<int> c;

int main() {
    cin >> n >> m;
    b.resize(m + 1);
    c.resize(m + 1);
    for(int i = 1; i <= n; i ++) {
        int p, d, t;
        cin >> p >> d >> t;
        if(t == 0) {
            b[1] += d;
            continue;
        }
        b[1] += p;
        b[t + 1] -= p;
        b[t + 1] += d;
    }
    for(int i = 1; i <= m; i ++) {
        c[i] = c[i - 1] + b[i];
    }
    for(int i = 1; i <= m; i ++) {
        cout << c[i] << " ";
    }
}