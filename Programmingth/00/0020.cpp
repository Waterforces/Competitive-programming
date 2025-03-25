#include<bits/stdc++.h>
using namespace std;
int _max,ans,sum;
int main() {
    for(int i=0;i<5;i++) {
        sum=0;
        for(int j=0;j<4;j++) {
            int a;
            cin >> a;
            sum+=a;
        }
        if(sum>_max) {
            _max=sum;
            ans=i;
        }
    }
    cout << ans+1 << " "  << _max;
}