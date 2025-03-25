#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int n,k,sum,stamp,all;

int main() {
    for(int i=0;i<3;i++) {
        int a,b;
        cin >> a >> b;
        mp[a]=b;
    }
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        int id,p;
        cin >> id >> p; 
        all+=p;
        if(mp[id]==0) sum+=p;
        else stamp+=mp[id];
    }
    cout << all << "\n" << sum << "\n";
    stamp+=sum/k;
    cout << stamp;
}