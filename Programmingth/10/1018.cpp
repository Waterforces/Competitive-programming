#include<bits/stdc++.h>
using namespace std;
int n,posi[2],direct=2;     // N=1 E=2 S=3 W=4

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        int dist;
        cin >> s >> dist;
        if(s=="RT") {
            direct++;
            if(direct>=5) direct=1;
        }
        if(s=="LT") {
            direct--;
            if(direct<=0) direct=4;       
        }
        if(s=="BW") {
            if(direct==1) direct=3;
            else if(direct==2) direct=4;
            else if(direct==3) direct=1;
            else if(direct==4) direct=2;
        }
        if(direct==1) posi[1]+=dist;
        else if(direct==2) posi[0]+=dist;
        else if(direct==3) posi[1]-=dist;
        else if(direct==4) posi[0]-=dist;
        if(posi[0]<=-50000 || posi[1]<=-50000 || posi[0]>=50000 || posi[1]>=50000) {
            cout << "DEAD";
            return 0;
        }
    }
    cout << posi[0] << " " << posi[1] << "\n";
    if(direct==1) cout << "N";
    else if(direct==2) cout << "E";
    else if(direct==3) cout << "S";
    else if(direct==4) cout << "W";
}