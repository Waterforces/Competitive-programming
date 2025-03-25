#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5+5;
int n,cnt;
pair<int,int> p[N];
priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
 
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        p[i]=make_pair(a,b);
    }
    sort(p,p+n);
    pq.push({0,cnt=1});
    for(int i=0;i<n;i++) {
        auto [f,l] = p[i];
        auto [ld,room] = pq.top();
        if(f>ld) {
            pq.pop();
            pq.push({l,room});
        }
        else {
            cnt++;
            pq.push({l,cnt});
        }
    }
    cout << cnt;
}