#include<bits/stdc++.h>
using namespace std;
double t,v;

int main() {
    cin >> t >> v;
    double V = 331.3+(0.606*t);
    cout << fixed << setprecision(2) << V << endl;
    if(V<v) cout << "higher";
    else cout << "lower";
}