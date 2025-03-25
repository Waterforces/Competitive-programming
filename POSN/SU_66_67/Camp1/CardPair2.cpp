#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int I=0;I<5;I++) {
        string a,b;
        cin >> a >> b;
        if(a[0]==a[1] && b[0]!=b[1]) cout << "W";
        else if(a[0]!=a[1] && b[0]==b[1]) cout << "L";
        else {
            int p=min(a[0],a[1])-'A',q=min(b[0],b[1])-'A';
            if(p<q) cout << "W";
            else if(p>q) cout << "L";
            else cout << "D";
        }
    }
}