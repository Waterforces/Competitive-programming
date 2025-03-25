#include<bits/stdc++.h>
using namespace std;
typedef struct product{
    string id,np,n;
    int val;
    string nb;
} product;
vector<product> v;
string s;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> s) {
        if(s=="exit") return 0;
        else if(s=="new") {
            string np,id,n,nb;
            int val;
            cin >> id >> np >> n >> val;
            v.push_back({id,np,n,val,""});
        }
        else if(s=="viewall") {
            cout << "viewall " << v.size() << " items\n";
            for(auto [id,np,n,val,nb]: v) {
                 cout << id << " " << np << " " << val << " ";
                if(nb=="") cout << "null\n";
                else cout << nb << "\n";
            }
            cout << "==========\n";
        }
        else if(s=="view") {
            string ID;
            cin >> ID;
            for(auto [id,np,n,val,nb]: v) {
                if(id!=ID) continue ;
                cout << "view " << id << " " << np << " " << val << " ";
                if(nb=="") cout << "null\n";
                else cout << nb << "\n";
                break ;
            }
        }
        else if(s=="delete") {
            string id;
            cin >> id;
            for(int i=0;i<v.size();i++) {
                if(v[i].id!=id) continue ;
                v.erase(v.begin()+i);
                break ;
            }
        }
        else if(s=="bid") {
            string ID,name;
            int Bid;
            cin >> ID >> name >> Bid;
            for(auto& [id,np,n,val,nb]: v) {
                if(id!=ID) continue ;
                if(Bid<=val) continue ;
                nb=name;
                val=Bid;
            }
        }
    }
}