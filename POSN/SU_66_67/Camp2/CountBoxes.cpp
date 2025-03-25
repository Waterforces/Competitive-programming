#include<bits/stdc++.h>
using namespace std;
int _min,a[3];
pair<int,int> p[4];
int ans,n;

void check() {
    if(a[0]<=8 && a[1]<=10 && a[2]<=15) {
        cout << 1 << endl;
        p[0].second+=(1200-(a[0]*a[1]*a[2]));
        p[0].first++;
        return ;
    }
    if(a[0]<=12 && a[1]<=15 && a[2]<=25) {
        cout << 2 << endl;
        p[1].second+=(4500-(a[0]*a[1]*a[2]));
        p[1].first++;
        return ;
    }
    if(a[0]<=20 && a[1]<=40 && a[2]<=50) {
        cout << 3 << endl;
        p[2].second+=(40000-(a[0]*a[1]*a[2]));
        p[2].first++;
        return ;
    }
    cout << "Oversize product\n";
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        check();
    }
    for(int i=0;i<3;i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }
}
