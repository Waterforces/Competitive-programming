#include<bits/stdc++.h>
using namespace std;
int n,a,b;
vector<int> v;

int main() {
    while(cin >> n) {
        if(n==0) break ;
        v.push_back(n);
    }
    for(int i=1;i<v.size()-1;i++) {
        if(v[i]>v[i-1] && v[i]>v[i+1]) a++;
        if(v[i]<v[i-1] && v[i]<v[i+1]) b++;
    }
    cout << a << "\n" << b;
}