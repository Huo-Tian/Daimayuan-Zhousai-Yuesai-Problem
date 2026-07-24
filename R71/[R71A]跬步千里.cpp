#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    if(n % 4 == 1) {
        cout << "Topic Training\n";
    } else if(n % 4 == 2) {
        cout << "Contest\n";
    } else if(n % 4 == 3) {
        cout << "Topic Training\n";
    } else {
        cout << "Summary Meeting\n";
    }
}