#include<bits/stdc++.h>
using namespace std;
double n;

int main() {
    cin >> n;
    if(n>=700) cout << "infrared";
    else if(n>=400) cout << "visible";
    else if(n>=10) cout << "UV";
    else if(n>=0.01) cout << "X-ray";
    else cout << "gamma";
}