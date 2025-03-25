#include<bits/stdc++.h>
using namespace std;
float w,h;

int main() {
    cin >> w >> h;
    if(w<=0 && h<=0) cout << "invalid width and height";
    else if(w<=0) cout << "invalid width";
    else if(h<=0) cout << "invalid height";
    else cout << fixed << setprecision(2) << w*h;
}   