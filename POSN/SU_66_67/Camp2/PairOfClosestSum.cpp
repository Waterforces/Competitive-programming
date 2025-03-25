#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005];
int idx[1005],ans=1000,_ans;
int x,y,k,n;
int main() {
    cin >> k >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    idx[n-1]=idx[n-2]=1;
    do {
        int sum=0,t;
        for(int i=0;i<n;i++) {
            if(idx[i]==1) {
                sum+=a[i];
                t=a[i];
            }
        }
        if(abs(k-sum)<ans) {
            ans=abs(k-sum);
            _ans=sum;
            x=sum-t;
            y=t;
            //cout << _ans << " " << x << " " << y << endl;
        }
        else if(abs(k-sum)==ans) {
            if(abs(sum-2*t)<abs(x-y)) {
                x=t;
                y=sum-t;
            }
        }
    }
    while(next_permutation(idx,idx+n));
    cout << _ans << endl << min(x,y) << " " << max(x,y);
}
