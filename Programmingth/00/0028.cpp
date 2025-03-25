#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    string s;
    int sum,w,l;
}node;
node x[5];
int a[4][4];

bool cmp(node a,node b) {
    if(a.sum==b.sum) {
        if((a.w-a.l)==(b.w-b.l)) {
            return a.w>b.w;
        }
        return (a.w-a.l)>(b.w-b.l);
    }
    return a.sum>b.sum;
}

int main() {
    cin >> x[0].s >> x[1].s  >> x[2].s >> x[3].s;
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            cin >> a[i][j];
            if(i==j) continue ;
            x[i].w+=a[i][j];
            x[j].l+=a[i][j];
        }
    }
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(i==j) continue ;
            int sum=a[i][j]-a[j][i];
            if(sum==0) x[i].sum++;
            else if(sum>0) x[i].sum+=3;
        }
    }
    sort(x,x+4,cmp);
    for(int i=0;i<4;i++) {
        cout << x[i].s << " " << x[i].sum << endl;
    }
}