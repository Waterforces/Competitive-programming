#include<bits/stdc++.h>
using namespace std;
typedef struct students {
    string id;;
    int all;
    bool operator<(const students& a) const {
        return all>a.all;
    }
} students;
int n,m,_max;
students x[10005];

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        string id;
        int a[m],sum=0;
        cin >> id;
        for(int j=0;j<m;j++) cin >> a[j];
        sort(a,a+m);
        for(int j=1;j<m;j++) sum+=a[j];
        x[i]={id,sum};
        // cout << x[i].id << " " << x[i].all << "\n";
    }
    for(int i=0;i<n;i++) _max=max(_max,x[i].all);
    cout << _max << "\n";
    for(int i=0;i<n;i++) {
        if(x[i].all==_max) cout << x[i].id << "\n";
    }
}