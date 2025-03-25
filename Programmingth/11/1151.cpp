#include<bits/stdc++.h>
using namespace std;
deque<int> dq;
int n,a;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;
        int x=dq.size();
        if(x==0) {
            dq.push_back(a);
            continue ;
        }
        int idx=lower_bound(dq.begin(),dq.end(),a)-dq.begin();
        if(idx>=x) dq.push_back(a);
        else dq[idx]=a;
    }
    cout << dq.size();
}