#include <bits/stdc++.h>
using namespace std;

int a, b, k;

int main() {
    cin >> a >> b >> k;
    int can = 0;
    if((10 * a + b) % k == 0)
        can ++;
    if((10 * b + a) % k == 0)
        can ++;
    if(can == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
}