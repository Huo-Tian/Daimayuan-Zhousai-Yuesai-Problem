#include <bits/stdc++.h>
using namespace std;

string s;
int a[26];

int main() {
    cin >> s;
    string t = "";
    for(int i = 0; i < s.size(); i ++) {
        if(a[s[i] - 'a'] == 0) {
            t += s[i];
        }
        a[s[i] - 'a'] ++;
    }
    cout << t << endl;
}