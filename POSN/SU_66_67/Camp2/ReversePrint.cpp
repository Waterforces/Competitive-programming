#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    do {
        int a;
        cin >> a;
        if(a==0) break;
        v.push_back(a);
    }
    while(true);
    for(int i=v.size()-1;i>=0;i--) {
        cout << v[i] << " ";
    }
}
