#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s) {
    transform(s.begin(),s.end(),s.begin(),::toupper);
    string t=s;
    reverse(t.begin(),t.end());
    if(t==s) return true;
    else false;
}

int main() {
    string s;
    cin >> s;
    cout << palindrome(s);
}