#include<bits/stdc++.h>
using namespace std;
int n;


int main() {
    string s;
    stack<char> st;
    cin >> s;
    st.push('0');
    for(int i=0;i<s.size();i++) {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
        else if(s[i]==')' || s[i]=='}' || s[i]==']') {
            auto ch = st.top();
            if((ch=='(' && s[i]==')') || (ch=='{' && s[i]=='}') || (ch=='[' && s[i]==']')) st.pop();
            else st.push(s[i]);
        }
    }
    cout << st.size()-1;
}