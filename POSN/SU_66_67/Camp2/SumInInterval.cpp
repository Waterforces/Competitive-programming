#include<bits/stdc++.h>
using namespace std;
int sum;
int x,y;
int c;
int main() {
    cin >> x >> y;
    for(int i=0;i<8;i++) {
        int a;
        cin >> a;
        if(a>=x && a<=y) {
            sum+=a;
            c++;
        }
    }
    if(c==0) cout << "None";
    else cout << sum;
}