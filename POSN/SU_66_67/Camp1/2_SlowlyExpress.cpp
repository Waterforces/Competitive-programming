#include<bits/stdc++.h>
using namespace std;
int n,all;

int main() {
    while(cin >> n) {
        if(n<0) break ;
        // cout << all << "\n";
        int tmp=0;
        all+=n;
        if(all>800) {
            tmp+=all/800;
            all%=800;
        }
        if(all>=500) {
            tmp+=all/500;
            all=0;
        }
        cout << tmp << "\n";
    }
}