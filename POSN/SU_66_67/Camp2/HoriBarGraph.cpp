#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int a;
int main() {
    do {
        cin >> a;
        if(a<=0) break;
        v.push_back(a);
    }
    while(true);
    for(auto x: v) {
        for(int i=0;i<x;i++) {
            cout << "*";
        }
        cout << endl;
    }
}
