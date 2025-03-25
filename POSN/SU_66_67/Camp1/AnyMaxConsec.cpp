#include<bits/stdc++.h>
using namespace std;
int a,cou,ans,k,tmp;

int main() {
    while(cin >> a) {
        if(a==0) break ;
        if(a==tmp) cou++;
        else {
            if(cou>ans) {
                ans=cou;
                k=tmp;
            }
            cou=1;
        }
        // cout << a << " " << cou << "\n";
        tmp=a;
    }
    cout << ans << "\n" << k;
}