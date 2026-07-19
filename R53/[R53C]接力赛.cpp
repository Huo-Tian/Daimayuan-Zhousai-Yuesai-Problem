#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];
int t[200010];
int nxt[200010];
int tims[200100];

int main() {
    cin >> n;
    int now, tim;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        nxt[a[i]] = i;
        if(a[i] == 0)
            now = i;
    }
    for(int j = 1; j <= n; j ++)
        cin >> t[j];
    tim = 0;
    for(int i = 1; i <= n; i ++) {
        tims[now] = tim;    
        tim += t[now];
        now = nxt[now];
    }
    for(int i = 1; i <= n; i ++) {
        cout << tims[i] << " ";
    }
}