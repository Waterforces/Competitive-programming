#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    while(cin >> n) {
        if(n<=0) return 0;
        for(int i=0;i<n;i++) cout << "*";
        cout << "\n";
    }
}