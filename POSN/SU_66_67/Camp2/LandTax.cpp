#include<bits/stdc++.h>
using namespace std;
double n,m,k;
int main() {
    cin >> n >> m >> k;
    double _max=max(n,m);
    double tax=k*_max*2/100;
    double ans=k*m*0.5/100;
    printf("%.2lf",tax+ans+40);
}
