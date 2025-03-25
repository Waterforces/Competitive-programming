#include<bits/stdc++.h>
using namespace std;
int n,a,trucks[2]={20000,20000};

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;
        if(trucks[0]-a>=0) {
            cout << 1 << "\n";
            trucks[0]-=a;
        }
        else if(trucks[1]-a>=0) {
            cout << 2 << "\n";
            trucks[1]-=a;
        }
        else cout << "0\n";
    }
}