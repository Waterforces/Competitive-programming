#include<bits/stdc++.h>
using namespace std;
double a,b,c,sum=40;

int main() {
    cin >> a >> b >> c;
    sum+=((max(a,b)*c)*0.02)+((b*c)*0.005);
    // cout << ((a*c)*0.02) << " " << ((b*c)*0.005) << " " << a*c << '\n';
    cout << fixed << setprecision(2) << sum;
}