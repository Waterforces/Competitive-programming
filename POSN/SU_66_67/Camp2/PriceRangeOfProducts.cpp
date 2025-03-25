#include<bits/stdc++.h>
using namespace std;
int n,m;
int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        int _min=INT_MAX,_max=0,a;
        float avg=0;
        for(int j=0;j<m;j++) {
            cin >> a;
            _min=min(_min,a);
            _max=max(_max,a);
            avg+=a;
        }
        cout << _min << " " << _max << " ";
        printf("%.2f\n",avg/m);
    }
    //cout << endl;
}
