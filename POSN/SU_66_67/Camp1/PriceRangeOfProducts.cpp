#include<bits/stdc++.h>
using namespace std;
int n,m;

int main() {
    cin >> n >> m;
    for(int I=0;I<n;I++) {
        int _min=INT_MAX,_max=INT_MIN;
        double avg=0;
        for(int i=0;i<m;i++) {
            int a;
            cin >> a;
            _min=min(_min,a);
            _max=max(_max,a);
            avg+=a;
        }
        cout << _min << " " << _max << " ";
        cout << fixed << setprecision(2) << avg/m << "\n";
    }
}