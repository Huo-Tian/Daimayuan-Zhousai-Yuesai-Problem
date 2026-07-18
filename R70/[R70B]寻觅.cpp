#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100010], x;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        // 1 <= n <= 1e4(1000)
        cin >> a[i];
    }
    for(; m--; ){
        cin >> x;
        int front = INT_MAX, rear = -1, times = 0;
        for(int i = 1; i <= n; i ++) {
            if(a[i] == x) {
                times ++;
                rear = max(rear, i);
                front = min(front, i);
            }
        }
        printf("%d %d %d\n", times, (front == INT_MAX ? -1 : front), rear);
    }
}  