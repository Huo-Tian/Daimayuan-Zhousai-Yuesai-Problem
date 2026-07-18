#include <bits/stdc++.h>
using namespace std;

int t;
int x;
int a[100010];

int main() {
    cin >> t;
    for(; t--; ){
        cin >> x;
        int cnt = 0, record = 0;
        bool allflag = false;
        for(int b = 2; b <= x; b ++) {
            cnt = 0;
            int x1 = x;
            while(x1 >= 1) {
                a[++cnt] = x1 % b;
                x1 /= b;
            }
            bool flag = true;
            for(int i = 1; i <= cnt / 2; i ++) {
                if(!(a[i] == a[cnt - i + 1])) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                allflag = true;
                record = b;
                break;
            }
        }
        if(allflag) {
            cout << "Yes\n" << record << "\n";
        } else {
            cout << "No\n";
        }
    }
}