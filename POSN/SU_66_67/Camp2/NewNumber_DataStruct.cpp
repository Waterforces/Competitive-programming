#include<bits/stdc++.h>
using namespace std;
typedef struct Numbers {
    int idx,val,cou=1;
} Numbers;
Numbers x[1000005];
int n,q,idx,cou,all,_max,_min=INT_MAX;

bool cmp(Numbers a,Numbers b) {
    return a.idx<b.idx;
}

int main() {
    while(cin >> n) {
        if(n==0) break ;
        all++;
        if(x[n].val==0) {
            x[n].val=n;
            x[n].idx=idx++;
            cou++;
            _max=max(_max,n);
            _min=min(_min,n);            
            continue ;
        }
        x[n].cou++;
    }
    cout << all << "\n" << cou << "\n";
    while(cin >> q) {
        if(q==0) break ;
        else if(q==1) {
            sort(x+_min,x+_max+1,cmp);
            for(int i=_min;i<=_max;i++) {
                if(x[i].val>0) cout << x[i].val << " ";
            }
        }
        else {
            for(int i=_min;i<=_max;i++) {
                if(x[i].val>0) cout << x[i].val << " ";
            }
        }
    }
}