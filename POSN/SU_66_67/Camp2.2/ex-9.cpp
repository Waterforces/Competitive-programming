#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 20;
    int *ip;

    ip = &var;
    cout << "Value of var variable : " << var << "\n";

    cout << "Address stored in ip variable : " << ip << "\n";

    cout << "Value of *ip variable : " << *ip;

    return 0;
}