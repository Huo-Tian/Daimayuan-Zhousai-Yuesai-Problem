#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
	cin >> n >> x;
	int y = n / x;
    cout << y + (n - y * x);
}