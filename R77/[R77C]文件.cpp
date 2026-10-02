#include <bits/stdc++.h>
using namespace std;

int n;
int a[400010];
int b[400010];
int ans = 0;

int main() {
    cin >> n;
    memset(b, -1, sizeof(b));
    vector<int> x;
    for(int i = 1; i <= 2 * n; i ++) {
        cin >> a[i];
        if(b[a[i]] == -1) {
            b[a[i]] = x.size();
            x.push_back(a[i]);
        } else {
            if(x[x.back()] == a[i]) {
                ans ++;
                b[a[i]] = -2;
                x.pop_back();
            } else {
                for(int j = b[a[i]]; j < x.size(); j ++) {
                    b[x[j]] --;
                }
                x.erase(x.begin() + b[a[i]]);
                b[a[i]] = -2;
            }
        }
    }   
    cout << ans << endl;
}