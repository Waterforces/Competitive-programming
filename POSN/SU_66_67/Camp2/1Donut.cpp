#include<bits/stdc++.h>
#define PI 3.14159 
using namespace std;
double n,m;

int main() {
    cin >> n >> m;
    cout << fixed << setprecision(2) << n*n*PI-m*m*PI;
}