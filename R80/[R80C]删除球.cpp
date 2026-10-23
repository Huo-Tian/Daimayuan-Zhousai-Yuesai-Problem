#include <bits/stdc++.h>
using namespace std;

int n, k;
struct Nums {
    int a, c;
} a[200010];
bool visited[200010];
int ans = INT_MAX;

bool cmp(Nums x, Nums y) {
    return (x.c == y.c ? x.a < y.a : x.c < y.c);
}

inline void dfs(int x, int end) {
    if(x == end + 1) {
        vector<int> t;
        int sum = 0;
        for(int i = 1; i <= n; i ++) {
            if(!visited[i]) {
                t.push_back(i);
            } else {
                sum += a[i].c;
            }
        }
        bool flag = false;
        for(int i = 0; i < t.size(); i ++) {
            for(int j = i + 1; j < t.size(); j ++) {
                if(i != j) {
                    if(abs(a[t[i]].a - a[t[j]].a) > k) {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(!flag) {
            ans = min(ans, sum);
        }
        return;
    }
    for(int i = 1; i <= n; i ++) {
        if(!visited[i]) {
            visited[i] = true;
            dfs(x + 1, end);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++)    
        cin >> a[i].a;
    for(int j = 1; j <= n; j ++) {
        cin >> a[j].c;
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i < n; i ++) {
        dfs(1, i);
    }
    cout << ans << endl;
}