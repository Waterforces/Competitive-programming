#include<bits/stdc++.h>
using namespace std;
typedef struct Num {
    int idx=-1,val,cou;
} Num;
Num x[50005];
int n,all;

bool cmp(Num a,Num b) {
    return a.idx<b.idx;
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(x[a].idx==-1) {
            all++;
            x[a]={i,a,1};
        }
        else x[a].cou++;
    }
    sort(x,x+50000,cmp);
    cout << all << "\n";
    for(int i=1;i<=50000;i++) {
        if(x[i].idx==-1) continue ;
        cout << x[i].val << " " << x[i].cou << "\n";
    }
}