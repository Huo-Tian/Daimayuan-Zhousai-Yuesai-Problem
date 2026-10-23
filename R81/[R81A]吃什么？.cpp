#include <bits/stdc++.h>
using namespace std;

int x;

int main(){
    cin >> x;
    cout << (x >= 50 ? "Hotpot" : (x >= 20 ? "BraisedPorkRice" : (x >= 1 ? "Rice" : "Water")));
}