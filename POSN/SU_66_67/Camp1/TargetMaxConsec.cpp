#include<bits/stdc++.h>
using namespace std;
int n,a,cou,tar,ans;

int main() {
    cin >> n;
    while(cin >> a) {
        if(a==0) break ;
        if(a==n) {
            cou++;
            tar++;
        }
        else {
            if(tar>ans) {
                ans=tar;
                tar=0;
            }
            else tar=0;
        }
    }
    cout << ans << "\n" << cou;
}