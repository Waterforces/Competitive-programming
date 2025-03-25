#include<bits/stdc++.h>
using namespace std;

void x2(int (&a)[5]) {
    for(int i=0;i<5;i++) a[i]*=2;
}

int main() {
    int a[5];
    for(int i=0;i<5;i++) cin >> a[i];
    x2(a);
    for(auto i: a) cout << i << " ";
} 