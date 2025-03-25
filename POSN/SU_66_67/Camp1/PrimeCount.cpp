#include<bits/stdc++.h>
using namespace std;
const int N=6e6+5;
int n,cou;
bool b[N];

void prime() {
    for(int i=2;i<n;i++) {
        if(b[i]) continue ;
        // cout << i << "\n";
        b[i]=1;
        cou++;
        for(int j=i+i;j<n;j+=i) {
            b[j]=1;
        }
    }
}

int main() {
    cin >> n;
    prime();
    cout << cou;
}