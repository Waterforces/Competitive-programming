#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n;
stack<char> st;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        char s;
        cin >> s;
        if(st.size()==0) st.push(s);
        else {
            auto x = st.top();
            if(s==x) st.pop();
            else st.push(s);
        }
    }
    cout << st.size() << endl;
    if(st.size()==0) cout << "empty";
    else {
        while(!st.empty()) {
            auto x = st.top(); st.pop();
            cout << x;
        }
    }
}