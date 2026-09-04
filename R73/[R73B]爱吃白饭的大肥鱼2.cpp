#include <bits/stdc++.h>
using namespace std;

int n, m, s;
int l, r;
int ans = 0;

int main() {
    cin >> n >> m >> s;
    l = r = s;
    for(; n --; ) {
        int x;
        cin >> x;
        if(x >= l && x <= r) {
            l = max(1, l - 1);
            r = min(m, r + 1);
            ans ++;
        } else if(x < l) {
            l --, r --;
        } else if(x > r) {
            l ++, r ++;
        }
    }
    printf("%d %d %d\n", ans, l, r);
}