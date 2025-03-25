#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int n,_max,c,m;
bool a[100005];
int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int k;
        cin >> k;
        if(k<=0 || k>n) continue;
        if(a[k]==0) a[k]=1;
    }
    for(int i=1;i<=n;i++) {
        if(a[i]==0)
        {

            c++;

        }
        if(a[i]!=0) c=0;
        if(_max<=c)
        {
            //cout << i-1 << endl;
            _max=c;
            //c=0;
            mp[i]=_max;
        }

    }
    cout << _max << endl;
    for(auto x: mp) {
        if(x.second==_max) cout << x.first << " ";
    }
}
