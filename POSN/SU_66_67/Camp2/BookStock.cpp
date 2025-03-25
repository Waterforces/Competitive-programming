#include<bits/stdc++.h>
using namespace std;
map<int,tuple<int,int,int> > mp;
map<int,int> Type;

int main() {
    int id;
    while(cin >> id) {
        if(id==0) break ;
        int type,price,val;
        cin >> type >> price >> val;
        auto& [typeb,priceb,valb] = mp[id];
        typeb=type;
        priceb=price;
        valb+=val;
    }
    for(auto& [Id,info] : mp) {
        auto& [typeb,priceb,valb] = info;
        cout << Id << " " << typeb << " " << priceb << " " << valb << "\n";
        Type[typeb]+=valb;
    }
    for(auto x: Type) {
        cout << "Type " << x.first << " " << x.second << "\n";
    }
}