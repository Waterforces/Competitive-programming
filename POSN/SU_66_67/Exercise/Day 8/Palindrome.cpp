#include<bits/stdc++.h>
using namespace std;
string s;

int main() {
    cout << "Enter the character\n";
    cin >> s;
    for(int i=0,j=s.size()-1;i>s.size();i++,j--) {
        if(s[i]!=s[j]) {
            cout << s << "is not a palindrome";
            return 0;
        }
    }
    cout << s << "is a palindrome";
}