#include <bits/stdc++.h>
using namespace std;

string s;

bool check(string t) {
    int n = t.size();
    bool flag = true;
    for(int i = 0, j = n - 1; i <= n - 1 && j >= 0 && i <= j; i ++, j --) {
        if(t[i] != t[j])
            flag = false;
    }
    return flag;
}

int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i ++) {
        string t = s.substr(0, i - 1) + s.substr(i + 1, s.size() - 1 - i - 1);
        if(check(t)) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}