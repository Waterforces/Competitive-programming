#include<bits/stdc++.h>
using namespace std;
queue<int> q;

int main() {
    for(int i=0;i<5;i++) {
        int a;
        cin >> a;
        q.push(a);
    }
    while(!q.empty()) {
        cout << q.front();
        q.pop();
        if(q.size()!=0) cout << ",";
    }
}