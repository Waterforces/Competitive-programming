#include<bits/stdc++.h>
using namespace std;
int n,a,power[3],tmp,cou;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    power[1]=power[2]=n;
    for(int i=0;i<2*n;i++) {
        int k=1;
        cin >> a;
        if(a%2==0) {
            if(a%2==tmp) {
                cou++;
                if(cou>=3) k=3;
            }
            else cou=1;
            power[1]-=k;
        }
        else {
            if(a%2==tmp) {
                cou++;
                if(cou>=3) k=3;
            }
            else cou=1;
            power[2]-=k;
        }
        tmp=a%2;
        // cout << power[1] << " " << power[2] << " " << k << " " << cou << endl;
        if(power[2]<=0) {
            cout << 1 << "\n" << a;
            break ;
        }
        if(power[1]<=0) {
            cout << 0 << "\n" << a;
            break ;
        }
    }

}