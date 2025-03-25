#include<bits/stdc++.h>
using namespace std;
int cou,big,small;

int main() {
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++) {
        if(s[i]==' ') cou++;
        else if(s[i]>='A' && s[i]<='Z') big++;
        else if(s[i]>='a' && s[i]<='z') small++;
    }
    cout << "Word = " << cou << "\n" << "Upper Character = " << big << "\n" << "Lower Character = " << small; 
}