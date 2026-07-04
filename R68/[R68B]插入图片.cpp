#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    int sl = s.size();
    bool out = false;
    for(int i = 0; i < sl; i ++) {
        if(s[i] == '[') {
            out = true;
        } else if(s[i] == ']') {
            out = false;
            return 0;
        } else {
            if(out)
                cout << s[i];
        }
    }
}