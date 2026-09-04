#include <bits/stdc++.h>

int n;
struct Card {
    int a;
    char t;
} a[200100];
int ans = 0;

int r, g, b;

bool cmp(Card x, Card y) {
    return x.a < y.a;
}

int main() {
    //freopen("rgb.in", "r", stdin);
    //freopen("rgb.out", "w", stdout);
    std::cin >> n;
    for(int i = 1; i <= 2 * n; i ++) {
        std::cin >> a[i].a;
        scanf(" ");
        std::cin >> a[i].t;
        if(a[i].t == 'R')
            r ++;
        else if(a[i].t == 'G') 
            g ++;
        else    
            b ++;
    }
    if(r % 2 == 0 && g % 2 == 0 && b % 2 == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    std::sort(a + 1, a + 2 * n + 1, cmp);
    for(int i = 1; i <= 2 * n; i += 2) {
        ans += abs(a[i + 1].a - a[i].a);
    }
    std::cout << ans << std::endl;
}