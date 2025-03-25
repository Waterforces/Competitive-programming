#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> n{1,2,3,4,5};
    cout << "Initial Vector: ";
    for(int i : n) cout << i << " ";

    n.at(1) = 9;
    n.at(4) = 7;

    cout << "\nUpdate Vector: ";
    for(int i : n) cout << i << " ";

    return 0;
}