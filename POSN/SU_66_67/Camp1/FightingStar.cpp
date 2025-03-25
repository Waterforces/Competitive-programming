#include<bits/stdc++.h>
using namespace std;
typedef struct stars {
    string name;
    int cou;
} stars;
int n,_min=INT_MAX;
stars x[10];

int main() {
    for(int i=0;i<8;i++) cin >> x[i].name;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        x[a-1].cou++;
    }
    // for(auto [name,cou]: x) cout << name << " " << cou << "\n";
    for(int i=0;i<8;i++) _min=min(_min,x[i].cou);
    for(int i=0;i<8;i++) {
        if(x[i].cou>_min) cout << x[i].name << "\n";
    }
}