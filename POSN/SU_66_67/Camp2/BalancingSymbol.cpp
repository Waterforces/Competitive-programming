// #include<bits/stdc++.h>
// using namespace std;
// int n;

// int main() {
//     cin.tie(0)->sync_with_stdio(0);
//     cin >> n;
//     cin.ignore();
//     for(int I=0;I<n;I++) {
//         string s;
//         stack<char> st;
//         getline(cin,s);
//         // cout << s << endl;
//         for(int i=0;i<s.size();i++) {
//             // cout << s[i] << " " << st.size() << endl;
//             if(s[i]==')' || s[i]=='}' || s[i]==']' || s[i]=='>' || s[i]=='\'' || s[i]=='\"') {
//                 char ch='0';
//                 if(st.size()>0) ch=st.top();
//                 if((ch=='(' && s[i]==')') || (ch=='{' && s[i]=='}') || (ch=='[' && s[i]==']') || (ch=='<' && s[i]=='>')) st.pop();
//                 else if((ch=='\'' && s[i]=='\'') || (ch=='\"' && s[i]=='\"')) st.pop();
//                 else st.push(s[i]);
//             }
//             else if(s[i]=='(' || s[i]=='{' || s[i]=='[' || s[i]=='<' || s[i]=='\'' || s[i]=='\"') st.push(s[i]);
//         }
//         if(st.size()==0) cout << "YES";
//         else cout << "NO";
//         cout << endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;

void display(stack<char> st) {
    stack<char> cp;
    cp=st;
    while(!cp.empty()) {
        char c=cp.top();
        cp.pop();
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    cin >> n;
    getline(cin,s);
    for(int j=0;j<n;j++) {
        k=0;
        stack<char> st;
        getline(cin,s);
//        cout << s << endl;
        int x=s.length();
        st.push('0');
        for(int i=0;i<x;i++) {
            char c=st.top();
            if(c=='\'' && s[i]=='\'') st.pop();
            else if (c=='\"' && s[i]=='\"') st.pop();
            else if(s[i]=='(' || s[i]=='{' || s[i]=='[' || s[i]=='\'' || s[i]=='\"' || s[i]=='<') st.push(s[i]);
            else if(s[i]==')' || s[i]=='}' || s[i]==']' || s[i]=='\'' || s[i]=='\"' || s[i]=='>') {
                if(c=='(' && s[i]==')') st.pop();
                else if(c=='{' && s[i]=='}') st.pop();
                else if(c=='[' && s[i]==']') st.pop();
                else if(c=='<' && s[i]=='>') st.pop();
//                else if(c=='\'' && s[i]=='\'') st.pop();
//                else if(c=='\"' && s[i]=='\"') st.pop();
                // else if(s[i]=='\'' || s[i]=='\"') st.push(s[i]);
                else {
                    cout << "NO\n";
                    k=1;
                    break ;
                }
            }
//            display(st);
        }
        if(st.top()=='0') cout << "YES\n";
        else if(k==0)cout << "NO\n";
    }
}