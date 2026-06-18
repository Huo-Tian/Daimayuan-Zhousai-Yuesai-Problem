#include <bits/stdc++.h>
using namespace std;

int n, m;
int p[100100], a, b;
bool flag[100100];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> p[i];
    }
    for(int i = 1; i <= m; i ++) {
        cin >> a >> b;
        if(p[a] > p[b]){
            swap(p[a], p[b]);
            flag[i] = true;
        }
        else 
            flag[i] = false;
    }
    bool ok = true;
    for(int i = 2; i <= n && ok; i ++) {
        if(p[i] < p[i - 1]) {
            ok = false;
        }
    }
    cout << (ok ? "Win\n" : "Lose\n");
    for(int i = 1; i <= m; i ++) {
        cout << (flag[i] ? "Yes\n" : "No\n");
    }
}