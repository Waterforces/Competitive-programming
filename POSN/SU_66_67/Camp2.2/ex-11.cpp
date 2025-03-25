#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num{1,2,3,4,5};
    cout << "Initial Vector: ";
    for(int  i : num) cout << i << " ";

    num.push_back(6);
    num.push_back(7);

    cout << "\nUpdated Vector: ";
    for(int i : num) cout << i << " ";

    return 0;
}