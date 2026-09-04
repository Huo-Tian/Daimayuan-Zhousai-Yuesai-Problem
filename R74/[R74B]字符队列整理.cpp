#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int ans = 0;

int check(string x) {
	int sum = 0;//score
	for(int i = 0; i < x.size() - 1; i ++) {
		if(x[i] == x[i + 1])
			sum ++;
	}
	return sum;
}

int main() {
	cin >> n;
	cin >> s;
	string t;
	for(int i = 0; i < n; i ++) {
        t.clear();
		for(int j = 0; j < i; j ++)
			t += s[j];
		for(int j = i + 1; j < n; j ++)
			t += s[j];
		t += s[i];
		ans = max(ans, check(t));
	}
	cout << ans << endl;
} 