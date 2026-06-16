#include <bits/stdc++.h>
using namespace std;

int n;
struct Node {
    int t, x, at, ans;
}a[1000010];

bool cmp(Node x, Node y) {
    if(x.t == y.t)
        return x.at < y.at;
    return x.t < y.t;
}

bool cmp2(Node x, Node y) {
    return x.at < y.at;
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].t >> a[i].x;
        a[i].at = i, a[i].ans = a[i].t;
    }
    sort(a + 1, a + n + 1, cmp);
    a[1].ans += a[1].x, a[2].ans += a[2].x;
    for(int i = 3; i <= n; i ++) {
        int sum = 1e9;
        for(int j = i - 2; j <= i - 1; j ++) {
            if(a[j].ans <= a[i].t){
                a[i].ans += a[i].x;
                break;
            } else {
                sum = min(sum, a[j].ans);
            }
        }
        if(a[i].ans == a[i].t) {
            a[i].ans = a[i].x + sum;
        }
    }
    sort(a + 1, a + n + 1, cmp2);
    for(int i = 1; i <= n; i ++) {
        cout << a[i].ans << endl;
    }
}