#include <bits/stdc++.h>
using namespace std;

string s;
int t;

int main() {
    cin >> s;
    for(int i = s.size() - 1; i >= 0; i --) {
        if((int)(s[i] - '0') % 2 == 0)
            t += (int)(s[i] - '0');
    }
    cout << t;
}