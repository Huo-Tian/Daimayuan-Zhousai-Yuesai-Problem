#include <bits/stdc++.h>
using namespace std;

int n;
struct Nums{
    int value, sum;
} a[100100];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].value;
        int x = a[i].value;
        while(x) {
            a[i].sum += x % 10;
            x /= 10;
        }
    }
    for(int i = 1; i <= n; i ++) {
        bool flag = true;
        for(int j = 1; j < i && flag; j ++) {
            if(a[j].sum > a[i].sum) {
                flag = false;
            }
        }
        if(flag)
            cout << a[i].value << " "; 
    }
}