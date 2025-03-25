#include<bits/stdc++.h>
using namespace std;

int find_vowel(string str) {
    int cou=0;
    for(int i=0;i<str.size();i++) {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') cou++;
    }
    return cou;
}

int main() {
    string str;
    cin >> str;
    cout << find_vowel(str);
}