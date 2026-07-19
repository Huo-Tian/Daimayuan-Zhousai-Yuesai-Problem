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
    for(; q--; ) {
        cin >> opt;
        if(opt == 1) {
            int x;
            cin >> x;
            if(turn == false && p - x < 0) continue;
            else if(turn == true && p + x >= n + 1) continue;
            if(work) {
                if(turn == false) {
                    diff[p - x] ++;
                    diff[p] --;
                } else if(turn == true) {
                    diff[p + 1] ++;
                    diff[p + x + 1] --;
                }
            }
            if(turn) {
                p += x;
            } else {
                p -= x;
            }
        } else if(opt == 2) {
            turn = (turn == true ? false : true);
        } else if(opt == 3){
            work = (work == true ? false : true);
        }
        for(int j = 2; j <= n + 1; j ++) {
            d[j] = d[j - 1] + diff[j];
        }
        for(int j = 2; j <= n + 1; j ++) {
            cout << d[j] % 2;
        }cout << endl;
    } 
    for(int j = 2; j <= n + 1; j ++) {
        d[j] = d[j - 1] + diff[j];
    }
    for(int j = 2; j <= n + 1; j ++) {
        cout << d[j] % 2;
    }cout << endl;
    
}