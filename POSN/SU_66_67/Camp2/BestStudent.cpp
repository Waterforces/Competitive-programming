#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    string idx,s1,s2;
    float sc;
}node;
node x[100];
float _max;
int ans,n;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> x[i].idx >> x[i].s1 >> x[i].s2 >> x[i].sc;
        if(_max<x[i].sc) {
            _max=x[i].sc;
            ans=i;
        }
    }
    cout << x[ans].idx << " " << x[ans].s1 << " " << x[ans].s2 << " " << x[ans].sc;
}
