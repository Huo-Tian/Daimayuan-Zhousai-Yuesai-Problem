#include <bits/stdc++.h>
using namespace std;

int n, x;
string s;

int main() {
    cin >> n >> x;
    cin >> s;
    s.erase(s.begin() + x);
    cout << s << endl;
}