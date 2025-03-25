#include<bits/stdc++.h>
using namespace std;
int n,dist,i=1,trc;

int main() {
    cin >> n;
    while(pow(i,2)-i+1<=n) {
        dist=i;
        i+=2;
    }
    trc=pow(dist,2)-dist+1;
    if(n+2==pow(dist+2,2)-dist-1)  cout << "Cannot find top-right corner.";
    else if(pow(dist+2,2)-dist-2==n) cout << n;
    else if(trc<=n) cout << trc;
    else cout << pow(dist-2,2)-dist+3;
}
