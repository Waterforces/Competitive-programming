#include<bits/stdc++.h>
using namespace std;
typedef struct medal {
    bool check;
    int gold,silver,bronze,all;
} medal;
map<int,medal> mp;
vector<int> idx;
int n,a;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int id,g,s,b;
        cin >> id >> g >> s >> b;
        idx.push_back(id);
        mp[id]={1,g,s,b,g+s+b};
    }
    while(cin >> a) {
        if(a<=0) {
            cout << "good bye";
            return 0;
        }
        else if(mp[a].check) cout << mp[a].gold << " " << mp[a].silver << " " << mp[a].bronze << " " << mp[a].all << "\n";
        else if(a==1001) {
            int _max=0;
            for(auto i: idx) _max=max(_max,mp[i].gold);
            for(auto i: idx) {
                if(mp[i].gold==_max) cout << i << " ";
            }
            cout << "\n";
        }
        else if(a==1002) {
            int _max=0;
            for(auto i: idx) _max=max(_max,mp[i].silver);
            for(auto i: idx) {
                if(mp[i].silver==_max) cout << i << " ";
            }
            cout << "\n";
        }
        else if(a==1003) {
            int _max=0;
            for(auto i: idx) _max=max(_max,mp[i].bronze);
            for(auto i: idx) {
                if(mp[i].bronze==_max) cout << i << " ";
            }
            cout << "\n";
        }
        else if(a==2000) {
            int _max=0;
            for(auto i: idx) _max=max(_max,mp[i].all);
            for(auto i: idx) {
                if(mp[i].all==_max) cout << i << " ";
            }
            cout << "\n";
        }
        else if(a==3000) {
            for(auto i: idx) {
                if(mp[i].all>0) cout << i << " ";
            }
            cout << "\n";
        }
        else cout << "invalid code\n"; 
    }
}