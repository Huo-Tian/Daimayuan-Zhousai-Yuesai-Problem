#include <bits/stdc++.h>
using namespace std;

int n;
int q, p;
int x;
int d[100010], diff[100100];
bool turn = true;
bool work = true;

int main() {
	//turn 左为false, 右为true
	//work 改为true，不改为false
	cin >> n >> q >> p;
	for(; q--; ) {
		int opt;
		cin >> opt;
		if(opt == 1) {
			cin >> x;
            if(turn == false && p - x <= 0) continue;
            if(turn == true && p + x >= n) continue;
            if(work) {
                diff[p] ++;
                diff[(turn == true ? p + x + 1 : p - x - 1)] --;
            }
            p = p + (turn ? x : -x);
		}
        else if(opt == 2) {
            turn = (turn == true ? false : true);
        } else if(opt == 3){
            work = (work == true ? false : true);
        }
	}
    for(int i = 1; i <= n; i ++) {
        d[i] = (d[i - 1] + diff[i]) % 2;
        cout << d[i] << " ";
    }
    cout << endl;
}