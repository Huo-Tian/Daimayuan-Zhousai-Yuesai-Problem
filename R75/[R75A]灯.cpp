#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    bool t[4];
    t[1] = t[2] = t[3] = false;
    t[a] = !t[a];
    t[b] = !t[b];
    t[c] = !t[c];
    cout << t[1] << " " << t[2] << " " << t[3] << endl;
}