#include <bits/stdc++.h>
using namespace std;

int n;
int q, p;
int opt;
int d[200010], diff[200100];
bool turn = true;
bool work = true;

int main() {
    turn = true, work = true;
	//turn 左为false, 右为true
	//work 改为true，不改为false
    cin >> n >> q >> p;
    for(int i = 1; i <= q; i ++) {
        cin >> opt;
        if(opt == 1) {
            int x;
            cin >> x;
            if(turn == false && p - x < 0) continue;
            if(turn == true && p + x + 1 > n) continue;
            if(work) {
                if(turn == false) {
                    diff[p - x] ++;
                    diff[p + 1] --;
                } else if(turn == true) {
                    diff[p] ++;
                    diff[p + x + 1] --;
                }
            }
            p += (turn ? x : -x);
        } else if(opt == 2) {
            turn = (turn == true ? false : true);
        } else if(opt == 3){
            work = (work == true ? false : true);
        }
    } 
    for(int i = 0; i <= n; i ++) {
        d[i] = d[i - 1] + diff[i];
    }
    for(int i = 0; i <= n; i ++) {
        cout << diff[i] << " ";
    }
        cout << endl;
    for(int i = 0; i <= n; i ++) {
        cout << d[i] % 2 << " ";
    }
}