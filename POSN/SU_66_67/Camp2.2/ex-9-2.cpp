#include<bits/stdc++.h>
using namespace std;

int main(){
    int b = 20;
    int *p = &b;
    *p = 50;
    cout << b;

    return 0;
}