#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    if(n>=80) cout << "Excellent";
    else if(n>=40) cout << "Pass";
    else cout << "Fail";
}