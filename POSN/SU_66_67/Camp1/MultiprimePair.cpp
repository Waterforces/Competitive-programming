#include<bits/stdc++.h>
using namespace std;
int n,cou=2;
bool prime[100005];
vector<int> v;

void findprime() {
    for(int i=2;i<=100000;i++) {
        if(prime[i]) continue ;
        v.push_back(i);
        for(int j=i*2;j<=100000;j+=i) prime[j]=1;
    }
}

int ans(int x) {
    int _min=INT_MAX;
    for(int i=0;i<v.size();i++) {
        for(int j=i+1;j<v.size();j++) {
            if(v[i]*v[j]>=x) _min=min(_min,v[i]*v[j]);
        }
    }
    return _min;
}

int main() {
    cin >> n;
    findprime();
    for(int I=0;I<n;I++) {
        int a;
        cin >> a;
        cout << ans(a) << "\n";
    }
}