#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec{1,2,3,4,5};
    vector<int>::iterator itr;
    
    itr = vec.begin();
    cout << "vec[0] = " << *itr << "\n";

    itr = vec.begin() + 2;
    cout << "vec[2] = " << *itr << "\n";

    itr = vec.end() - 1;
    cout << "vec[4] = " << *itr;

    return 0;
}