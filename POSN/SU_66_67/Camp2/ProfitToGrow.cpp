#include<bits/stdc++.h>
using namespace std;
int n,k;
int c,d;

int main() {
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        c+=a-b;
    }
    if(c>0) {
        cout << "Profit " << abs(c) << endl;
    }
    else if(c<0) {
        cout << "Loss " << abs(c) << endl;
    }
    else cout << "Breakeven" << endl;
    if(c>=k) {
        cout << "Expand";
        return 0;
    }
    if(c<k/2) {
        cout << "Not expand";
        return 0;
    }
    cout << "Wait and see" << endl;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        d+=a-b;
    }
    if(d>0) {
        cout << "Profit " << abs(d) << endl;
    }
    else if(d<0) {
        cout << "Loss " << abs(d) << endl;
    }
    else cout << "Breakeven" << endl;
    if(d>=k) {
        cout << "Expand";
        return 0;
    }
    else cout << "Not expand";
}
