#include<bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
int n;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=0;i<n;i++) {
        char s;
        cin >> s;
        if(s=='P') {
            int m;
            cin >> m;
            pq.push(m);
        }
        else if(s=='Q') {
            if(pq.size()==0) cout << -1 << endl;
            else {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
}