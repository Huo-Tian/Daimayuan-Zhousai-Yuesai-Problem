#include <bits/stdc++.h>
using namespace std;

int t, s;

int main() {
    cin >> t >> s;
    if(t <= 30 && s >= 5)
        cout << "Gold";
    else
        if(t <= 60 && s >= 3)
            cout << "Silver";
        else   
            cout << "Bronze";
}