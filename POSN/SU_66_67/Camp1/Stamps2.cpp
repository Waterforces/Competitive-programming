#include<bits/stdc++.h>
using namespace std;
typedef struct product {
    int type,val;
} product;
map<string,product> mp;
int n,k,sum,monst,stamp;

int main() {
    for(int i=0;i<3;i++) {
        string s;
        int type,val;
        cin >> s >> type >> val;
        mp[s]={type,val};
    }
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        string s;
        int price;
        cin >> s >> price;
        int type=mp[s].type;
        if(type==1) {
            sum+=price;
            stamp+=mp[s].val;
        }
        else if(type==2) {
            sum+=(price-mp[s].val);
        }
        else {
            sum+=price;
            monst+=price;
        }
        // cout << mp[s].val << " " << price << "\n";
        // cout << sum << " " << monst << " " << stamp+monst/k << "\n";
    }
    cout << sum << "\n" << monst << "\n" << stamp+monst/k;
}