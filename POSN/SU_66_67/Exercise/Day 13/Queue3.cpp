#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int n;

int main() {
    cin >> n;
    int a;
    while(cin >> a) {
        if(a==0) break ;
        q.push(a);
    }
    while(!q.empty()) {
        if(q.size()>n) q.pop();
        cout << q.front();
        q.pop();
        if(q.size()!=0) cout << ","; 
    }
}