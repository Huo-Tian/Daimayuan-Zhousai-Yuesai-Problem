#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int a[201010], cnt = 0;

int main() {
    cin >> n;
    cin >> s;
    int z, o, regular = n / 2;
    z = o = 0;
    int sl = s.size();
    for(int i = 0; i < sl; i ++) {
        (s[i] == '1' ? o ++ : z ++);
    }
    int zc, oc;
    if(o > z) {
        zc = regular - zc, oc = oc - regular;
        for(int i = 0; i < sl; i ++) {
            if(s[i] == '1' && z != o) {
                a[++cnt] = i + 1;
                o --, z ++;
            }
        }
    } else {
        zc = zc - regular, oc = regular - oc;
        for(int i = sl - 1; i >= 0; i --) {
            if(s[i] == '0' && z != o) {
                a[++cnt] = i + 1;
                z --, o ++;
            }
        }
    }
    cout << cnt << endl;
    sort(a + 1, a + cnt + 1);
    for(int i = 1; i <= cnt; i ++) 
        cout << a[i] << " ";
}