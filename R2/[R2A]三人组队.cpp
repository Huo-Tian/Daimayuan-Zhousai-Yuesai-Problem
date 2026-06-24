#include <bits/stdc++.h>
using namespace std;

int n, a[1001];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    printf("%d", a[n - 2] + a[n - 1] + a[n]);
}