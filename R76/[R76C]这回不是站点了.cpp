#include <bits/stdc++.h>
using namespace std;

int n, m;
char s[2010][2010];

inline void char_swap(int x, int y) {
    for(int i = 1; i <= n; i ++) {
        swap(s[i][x], s[i][y]);
    }
    return;
}

int jc(int x, int y) {
    int cnt = 1;
    for(int i = 1; i <= y; i ++) {
        cnt *= x;
    }
    return cnt;
}

inline void check(int &ans) {
    for(int i = 1; i <= n; i ++) {
        int sum = 0;
        for(int j = 1; j <= m; j ++) {
            sum = (s[i][j] == '1' ? sum * 10 + jc(2, m - i + 1) : sum);
        }
        ans += sum;
    }
    return;
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++)
            cin >> s[i][j];
    }
    int ma = 0;
    for(int i = 1; i <= m; i ++) {
        for(int j = 1; j <= m; j ++) {
            if(i != j) {
                int ans = 0;
                char_swap(i, j);
                check(ans);
                ma = max(ma, ans);
            }
        }
    }
    cout << ma << endl;
}