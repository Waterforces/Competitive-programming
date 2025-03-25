#include<bits/stdc++.h>
using namespace std;
int n,c;
int main() {
    int a;
    cin >> n;
    do {
        cin >> a;
        if(a==n) c++;
        if(a==0) break ;
    }
    while(true);
    if(c==0) cout << "None";
    else cout << c;
}
