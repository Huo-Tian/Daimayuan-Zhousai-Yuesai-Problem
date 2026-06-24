#include <bits/stdc++.h>
using namespace std;

int n;
char s[1000001];

int main() {
    cin >> n;
    scanf("%s", s + 1);
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (s[i] == 'D' || s[i] == 'M' || s[i] == 'Y') {
            cout << s[i];
            flag = true;
        }
    }
    if (!flag) {
        cout << "-1";
    }
}