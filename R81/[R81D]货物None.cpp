#include <bits/stdc++.h>
using namespace std;

int n, m;
int c[200010];
bool have[200010];
int a[200010];
int l = m, cnt = 0;
bool visited[200010];

inline void dfs(int x) {
    if(x == l + 1) {
        bool b[200010];
        for(int i = 1; i <= m; i ++) {
            b[c[a[i]]] = true;
        }
        for(int i = 1; i <= m; i ++) {
            if(have[i] != b[i]) {
                return;
            }
        }
        cnt ++;
        return;
    }
    for(int i = 1; i <= n; i ++) {
        if(!visited[i]) {
            visited[i] = true;
            a[x] = i;
            dfs(x + 1);
            a[x] = 0;
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> c[i];
        have[c[i]] = true;
    }
    dfs(1);
    cout << cnt << endl;
}