#include<bits/stdc++.h>
using namespace std;
float k,m,n,ans=100,s1,s2;
int x=1000,y;
int main() {
    cin >> k >> n >> m;
    for(int i=0;i<=k;i++) {
        //cout << "---" << i << endl;
        if((i==0 && n>0) || ((k-i)==0 && m>0)) continue ;  
        if(i==0) s1=0;  
        else s1 = ceil(n/(i*6));
        if((k-i)==0) s2=0;
        else s2 = ceil(m/((k-i)*10));
        //cout << s1 << " " << s2 << endl;
        float _max=max(s1,s2);
        if(ans>=_max) {
            if(ans==_max) {
                if(i<x) {
                    x=i;
                    y=k-i;
                }
            }
            else {
                x=i;
                y=k-i;
            }
            ans=_max;
            //cout << x << " " << y << endl;
            //cout << ans << endl;
        }
    }
    //cout << "A" << endl;
    cout << x << " " << y;
}