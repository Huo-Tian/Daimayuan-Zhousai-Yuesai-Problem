#include <bits/stdc++.h>
using namespace std;

int n;
char s[200010],t[200010];
int maxin = 0;
char c[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

int main() {
    scanf("%d",&n);
    printf("%c",c[1]);
    scanf("%s",s + 1);
    for (int i = 0;i < 26;i++){
        int l = 0;
        for (int j = 1;j <= n;j++){
            if (s[j] != c[i]){
                l++;
                t[l] = s[j];
            }    
        }
        int sum = 0;
        for (int j = 1;j <= l - 1;j++){
            if (t[j] == t[j + 1])
                sum++;
        }
        maxin = max(sum,maxin);
    }
    printf("%d",maxin);
    return 0;
}