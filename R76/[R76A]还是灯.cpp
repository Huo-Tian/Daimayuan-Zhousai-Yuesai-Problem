#include <bits/stdc++.h>
using namespace std;

int a, b, s;

int main() {
    cin >> a >> b >> s;
    cout << min(s, a + b) << " " << max(0, s - a - b) << endl;
}