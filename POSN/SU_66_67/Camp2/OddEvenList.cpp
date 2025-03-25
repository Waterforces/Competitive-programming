#include<bits/stdc++.h>
using namespace std;
int n,cou;
vector<int> v;
list<int> odd,even;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while(true) {
        cin >> n;
        if(n==0) cou++;
        else cou=0;
        if(cou>=3) {
            v.pop_back(); v.pop_back();
            break ;
        }
        v.push_back(n);
    }
    for(auto x: v) {
        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }

    while(!odd.empty() && !even.empty()) {
        // for(auto x: even) cout << x << " ";
        // cout << endl;
        // for(auto x: odd) cout << x << " ";     
        // cout << endl << "-----------------------------------" << endl;    
        auto a=odd.front();
        auto b=even.front();
        if(a>b) odd.pop_front();
        else even.pop_front();
    }
    cout << odd.size() << " " << even.size() << endl;
    if(odd.size()==0) cout << "ODD " << even.size();
    else cout << "EVEN " << odd.size();
}

/*
34 36 28 58 68 96 26 84 10 60
85 29 57 9 1 41 33 19 75 55
*/