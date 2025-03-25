#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pii pair<int,int>
#define T tuple<int,int,int>
using namespace std;
const int N = 2e5+5;
int n,cou,ans[N];
vector<T> v;
priority_queue<pii,vector<pii>,greater<pii> > pq;
 
bool cmp(T a,T b) {
    return get<2>(a)<get<2>(b);
}
 
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int f,l;
        cin >> f >> l;
        v.push_back({f,l,i});
    }
    sort(v.begin(),v.end());
    pq.push({INT_MAX,0});
    for(auto [fd,ld,idx]: v) {
        auto [l,room] = pq.top();
        if(fd<=l) {
            cou++;
            ans[idx]=cou;
            pq.push({ld,cou});
        }
        else {
            ans[idx]=room;
            pq.pop();
            pq.push({ld,room});
        }
        // cout << ld << " " << fd << " " << room << " " << ans[idx] << endl;
    }
    sort(v.begin(),v.end(),cmp);
    cout << cou << endl;
    for(auto [ld,fd,idx]: v) cout << ans[idx] << " ";
}
