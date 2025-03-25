#include<bits/stdc++.h>
using namespace std;
typedef struct computer {
    int type,price,stock;
} computer;
int n;
computer com[50005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int id,type,price,val;
        cin >> id >> type >> price >> val;
        com[id]={type,price,val};
    }
    cin >> n;
    for(int I=0;I<n;I++) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        auto& [at,ap,as] =com[a[0]];
        auto& [bt,bp,bs] =com[a[1]];
        auto& [ct,cp,cs] = com[a[2]];
        if((at+bt+ct==6) && (at+bt!=6)) {
            if(as<=0 || bs<=0 || cs<=0) cout << "out of stock\n";
            else {
                as--; bs--; cs--;
                cout << ap+bp+cp << "\n";
            }
            continue ;
        }
        cout << "invalid order\n";
    }
}