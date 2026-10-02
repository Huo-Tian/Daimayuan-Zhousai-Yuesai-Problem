#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n;
int a[400010];
vector<int> b;
int ans = 0;

int main() {
    cin >> n;
    vector<int> x;
    for(int i = 1; i <= 2 * n; i ++)
        cin >> a[i];
    for(int i = 1; i <= 2 * n; i ++) {
        while(!x.empty() && b[x.back()] == 0)
            x.pop_back();
        if(b[a[i]] == -1) {
            b[a[i]] = x.size();
            x.push_back(a[i]);
        } else {
                b[a[i]] = -1;
            if(x[x.back()] == a[i]) {
                ans ++;
            }
        }
    }   
    cout << ans << endl;
}