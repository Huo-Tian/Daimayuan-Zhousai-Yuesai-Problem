#include <bits/stdc++.h>
using namespace std;

int x, y, op;

int main() {
    cin >> x >> y >> op;
    cout << (op == 1 ? max(x, y) : min(x, y));
}