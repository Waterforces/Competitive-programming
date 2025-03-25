#include<bits/stdc++.h>
using namespace std;
float a,b,c;

int main() {
    cin >> a >> b >> c;
    if(c==0) cout << "cannot divide by zero";
    else {
        cout << fixed << setprecision(6) << (a+b)/c;
    }
}