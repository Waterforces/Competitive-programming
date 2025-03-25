#include<bits/stdc++.h>
using namespace std;
int n,m,c;
int a[1005];
deque<int> dq;

void dis() {
    for(int i=0;i<dq.size();i++) {
        cout << dq[i] << " ";
    }
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int id,cl;
        cin >> cl >> id;
        a[id]=cl;
    }
    while(true) {
        char s;
        c=-1;
        cin >> s;
        if(s=='X') {
            cout << 0;
            return 0;
        }
        if(s=='E') {
            int k;
            cin >> k;
            for(int i=0;i<dq.size();i++) {
                if(a[dq[i]]!=a[k]) continue ;
                c=i+1;
                // cout << a[dq[i]] << " " << a[k] << endl;
                // cout << k << " " << c << endl;           
                // cout << dq.size() << endl;
            }

            if(c==-1) dq.push_back(k);
            else dq.insert(dq.begin()+c,k);
            // dis();
        }
        if(s=='D') {
            cout << dq[0] << endl;
            dq.pop_front();
        }
    }
}