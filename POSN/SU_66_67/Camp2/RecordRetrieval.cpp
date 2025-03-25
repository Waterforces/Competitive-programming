#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int val;
    string id,s1,s2;
}node;
int n,c,m;
node x[20005];
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> x[i].id >> x[i].s1 >> x[i].s2 >> x[i].val;
    }
    cin >> m;
    for(int i=0;i<n;i++) {
        if(x[i].val==m) {
            cout << x[i].id << " " << x[i].s1 << " " << x[i].s2<< endl;
            c++;
        }
    }
    if(c==0) cout << "None";
}
