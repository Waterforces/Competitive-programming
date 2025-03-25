#include<bits/stdc++.h>
using namespace std;
map<string,int> mp,area;
string s;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> s) {
        string id;
        if(s=="exit") return 0;
        else if(s=="area") {
            int _begin;
            cin >> s >> _begin;
            mp[s]=_begin;
            area[s]=1;
            cout << "\n";
        }
        else if(s=="bed") {
            int increase;
            cin >> s >> increase;
            mp[s]+=increase;
            cout << "\n";
        }
        else if(s=="patient") {
            int decrease;
            cin >> s >> decrease;
            mp[s]-=decrease;
            cout << "\n";
        }
        else if(s=="death") {
            int increase;
            cin >> s >> increase;
            mp[s]+=increase;
            cout << "\n";
        }
        else if(s=="recovery") {
            int increase;
            cin >> s >> increase;
            mp[s]+=increase;
            cout << "\n";
        }
        else if(s=="report") {
            string contry;
            cin >> contry;
            if(contry=="0") {
                for(auto [id,val] : mp) cout << id << " " << val << "\n";
            }
            else if(area[contry]==1) cout << contry << " " << mp[contry] << "\n";
            else cout << "no area " << contry << "\n"; 
        }
    }
}