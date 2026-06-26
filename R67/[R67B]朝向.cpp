#include <bits/stdc++.h>
using namespace std;

char D;
int n;
string s;

int main() {
    cin >> D >> n;
    cin >> s;
    for(int i = 0; i < s.size(); i ++) {
        if(s[i] == 'R') {
            if(D == 'N') D = 'E';
            else if(D == 'E') D = 'S';
            else if(D == 'S') D = 'W';
            else if(D == 'W') D = 'N';
        } else if(s[i] == 'L') {
            if(D == 'N') D = 'W';
            else if(D == 'E') D = 'N';
            else if(D == 'S') D = 'E';
            else if(D == 'W') D = 'S';
        }
        cout << D;
    }
}