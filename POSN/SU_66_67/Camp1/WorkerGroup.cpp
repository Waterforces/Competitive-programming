#include<bits/stdc++.h>
using namespace std;
double n,m,k;
int _min=INT_MAX,x,y;

int main() {
    cin >> k >> n >> m;
    for(int i=0,j=k;i<=k;i++,j--) {
        if((n>0 && i==0) || (m>0 && j==0)) continue ;
        // cout << i << " " << j << endl;
        int a=0,b=0;
        if(i>0) a=ceil(ceil(n/6)/i);
        if(j>0) b=ceil(ceil(m/10)/j);
        // cout << i << " " << j << " :: " << a << " " << b << endl;
        int _max=max(a,b);
        // cout << _max << " " << _min << "\n";
        if(_max<=_min) {
            if(_max==_min) {
                // cout << "A\n";
                if(y<j) {
                    x=i;
                    y=j;
                }
            }
            else {
                _min=_max;
                x=i;
                y=j;
            }
        }
    }
    cout << x << " " << y;
}