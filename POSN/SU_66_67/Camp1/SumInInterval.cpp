#include<bits/stdc++.h>
using namespace std;
int x,y,sum,check;

int main() {
    cin >> x >> y;
    for(int i=0;i<8;i++) {
        int a;
        cin >> a;
        if(a<=y && a>=x) {
            sum+=a;
            check=1;
        }
    }
    if(!check) cout << "None";
    else cout << sum;
}