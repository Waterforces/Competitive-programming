#include<bits/stdc++.h>
using namespace std;
int sex,age,marry;
string s;

int main() {
    getline(cin,s);
    cin >> sex >> age >> marry;
    if(sex==1) {
        if(age<=15) cout << "Master ";
        else cout << "Mr. ";
    }
    else {
        if(age<=15 || marry==0) cout << "Miss ";
        else cout << "Mrs. ";
    }
    cout << s;
}