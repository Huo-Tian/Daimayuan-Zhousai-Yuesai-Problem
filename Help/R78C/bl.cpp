#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int a[220010];
int ans = 0;

int check(string bl) {
    int sum = 0;
    int m = bl.size() - 1;
    for(int i = 0; i < m; i ++) {
        if(bl[i] == bl[i + 1])
            sum ++;
    }
    return sum;
}

int main() {
    cin >> n;
    scanf("\n");
    cin >> s;
    for(int i = 0; i < n; i ++) {
        a[(int)(s[i] - 'A' + 1)] ++;
    }
    for(int i = 1; i <= 26; i ++) {
        if(a[i] >= 1) {
            string t = s;
            while(t.find((char)('A' + i - 1)) != string::npos) {
                t.erase(t.find((char)('A' + i - 1)), 1);
            }
            int sum = check(t);
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
}