#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll x, y, u, v;

bool check(ll mid) {
    int st = 0, dt = 0;
    st = (int)(ceil(mid / u)) * v + min(mid % u, v);
    //cout << (int)(ceil(mid / u)) * v << " " << min(mid % u, v) << endl;
    dt = mid - st;
    int sena = (x - st), senb = (y - st);
    //printf("一共吃:%d 吃两种药:%d 吃一种药:%d A剩余:%d B剩余:%d\n", mid, st, dt, sena, senb);
    if (sena <= dt && senb <= dt && sena + senb <= dt) {
        return true;
    }
    return false;
}

int main() {
    cin >> x >> y >> u >> v;
    ll L = 0, R = x + y;
    while (L + 1 < R) {
        //cout << L << " " << R << " ";
        ll mid = (L + R) / 2;
        if (check(mid)) {
            R = mid;
        } else {
            L = mid;
        }
    }
    cout << R << endl;
}