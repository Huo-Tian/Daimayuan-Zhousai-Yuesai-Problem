#include <bits/stdc++.h>
using namespace std;

int n;
int ans = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++)
        if(i % 3 == 0 && i % 5 != 0)
            ans ++;
    cout << ans << endl;
}