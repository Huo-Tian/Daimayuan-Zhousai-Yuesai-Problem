#include <bits/stdc++.h>
using namespace std;

int n, q;
int x, y;
int p[100010], pos[100010];

int main() {
	cin >> n >> q;
	for(int i = 1; i <= n; i ++) {
		p[i] = i;
		pos[i] = i;
	}
	for(; q--; ) {
		int a, b;
		cin >> a >> b;
		swap(p[pos[a]], p[pos[b]]);
		swap(pos[a], pos[b]);
	}
	for(int i = pos[1]; i <= n; i ++) {
		cout << p[i] << " ";
	}
	for(int i = 1; i < pos[1]; i ++) {
		cout << p[i] << " ";
	}
}