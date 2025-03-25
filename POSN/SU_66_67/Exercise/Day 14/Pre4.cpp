#include<bits/stdc++.h>
using namespace std;
int n,a[100],k[100],_max,idx,sum;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(_max<=a[i]) {
            _max=a[i];
            idx=i;
        }
    }
    for(int i=1,t=a[0];i<idx;i++) {
        if(t-a[i]>=0) k[i]=t-a[i];
        else t=a[i];
    }
    for(int i=n-1,t=a[n-1];i>idx;i--) {
        if(t-a[i]>=0) k[i]=t-a[i];
        else t=a[i];
    }
    for(int i=0;i<n;i++) sum+=k[i];
    cout << sum;
}

/*
     O
   O O
O  O O
O  O OO
O  OOOO O
O OOOOO O
O OOOOOOO
*/