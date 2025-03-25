#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,sum;
vector<int> v[3005];
priority_queue<int> pq;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int a;
            cin >> a;
            v[i+j].push_back(a);
        }
    }
    for(int i=n*2-2;i>0;i--) {
        for(auto x: v[i]) pq.push(x);
        sum+=pq.top();
        pq.pop();
    }
    cout << sum;
}