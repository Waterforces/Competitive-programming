#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define F first
#define S second
using namespace std;
const int N = 1e9+5;
int n,start,stop,ans=-1;
vector<int> v;
queue<pair<int,int> > q;

int main() {
    cin >> n;
    v.resize(n+1);
    for(int i=0;i<n;i++) {
        int a; cin >> a;
        v[i]=a;
    }
    cin >> start >> stop;
    q.push({start,0});
    while(!q.empty()) {
        int x = q.front().F,cnt = q.front().S;
        if(x>stop || x<start) continue ;
        
        for(auto y: v) {
            if(x+y>=start) q.push({x+y,cnt+1});
            if(x-y<=stop) q.push({x-y,cnt+1});
        }
    }
}