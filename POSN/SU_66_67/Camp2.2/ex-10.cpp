#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> vec1 = {1,2,3,4,5}, vec2{6,7,8,9,10}, vec3(5,12);
     cout << "Vector1 = ";
     for(int v : vec1) cout << v << " ";
     cout << "\n";\
     cout << "Vector2 = ";
     for(int& v : vec2) cout << v << " ";
     cout << "\n";
     cout << "Vector3 = ";
     for(const int& v : vec3) cout << v << " ";

    return 0;
}