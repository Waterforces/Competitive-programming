#include<bits/stdc++.h>
using namespace std;
int bus[10005],a[10005],cou[10005],n,pebus[4]={0,11,14,27};

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    int id,val;
    while(cin >> id) {
        if(id<=0) break ;
        cin >> val;
        if(val!=0) {
            bus[id]+=val;
            if(bus[id]>pebus[a[id]]) bus[id]=pebus[a[id]];
            if(bus[id]<0) bus[id]=0;
        }
        else {
            if(bus[id]==-1) bus[id]=0;
            else bus[id]=-1;
        }
        // for(int i=1;i<=n;i++) cout << bus[i] << " ";
        // cout << "\n";
    }
    for(int i=1;i<=n;i++) cout << bus[i] << " ";
}