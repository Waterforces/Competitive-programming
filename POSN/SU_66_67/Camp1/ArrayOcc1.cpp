#include<bits/stdc++.h>
using namespace std;
typedef struct numbers {
    int cou,idx;
    bool operator<(const numbers& a) const {
        return idx<a.idx;
    }
} numbers;
int n,k,out,full,emp,_max;
numbers x[100005];

int main() {
    cin >> n >> k;
    for(int i=0;i<k;i++) {
        int a;
        cin >> a;
        if(a<=0 || a>n) {
            out++;
            continue ;
        }
        if(x[a].cou!=0) {
            full++;
            x[a].cou++;
            _max=max(_max,x[a].cou);
            // cout << a << " " << x[a].cou << endl;
            continue ;
        } 
        emp++;
        x[a].cou++;
        x[a].idx=a;
    }
    sort(x,x+n);
    cout << emp << "\n" << out << "\n" << full << "\n";
    for(int i=1;i<=n;i++) {
        if(x[i].cou==_max) cout << x[i].idx << " ";
    }
}