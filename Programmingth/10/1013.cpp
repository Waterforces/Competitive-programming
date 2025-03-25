#include<bits/stdc++.h>
using namespace std;
int n,cou,mp[10000],_size,op[4]={0,'+','*','^'};
string s;
pair<int,int> ans;
stack<int> st;

void mark() {
    for(int i=0;i<=_size;i++) {
        if(s[i]=='(') st.push(i);
        else if(s[i]==')') {
            mp[st.top()]=i;
            st.pop();
        }
    }
}

pair<int,int> run(int start,int stop,int sq) {
    int be=start,en=stop,t=0,m[4]={0,0,0,0};
    for(int i=start;i<=stop;i++) {
        if(mp[i]!=0) i=mp[i]-1;
        else {
            if(s[i]=='+') m[0]=1;
            else if(s[i]=='*') m[1]=2;
            else if(s[i]=='^') m[2]=3;
        }
    }
    if(m[0]>0) t=m[0];
    else if(m[1]>0) t=m[1];
    else if(m[2]>0) t=m[2];
    for(int i=start;i<=stop;i++) {
        if(mp[i]!=0) i=mp[i]-1;
        else {
            if(s[i]==op[t]) {
                cou++;
                if(cou==sq) be=i+1;
                else if(cou==sq+1) {
                    en=i-1;
                    break ;
                }
            }
        }
    }
    // cout << be << " " << en << " " << cou << '\n';
    if(be==start && en==stop && cou==sq && be-en!=0) {be++; en--;}
    if(sq+1-cou==0 || sq+1-cou==1) return {be,en};
    else return {-1,-1};
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> s >> n;
    _size=s.size()-1;
    mark();
    for(int I=0;I<n;I++) {
        int sq;
        vector<int> v;
        ans={0,_size};
        while(cin >> sq) {
            if(sq==0) break ; cou=1; v.push_back(sq);
            if((ans.first==-1 && ans.second==-1)) {ans={-1,-1}; continue ;}
            ans=run(ans.first,ans.second,sq);
        }
        // cout << ans.first << " " << ans.second << endl;
        for(int i=v.size()-1;i>=0;i--) cout << "op(" << v[i] << ",";
        cout << "p";
        for(int i=0;i<v.size();i++) cout << ")";
        cout << "=";
        if(ans.first!=-1 && ans.second!=-1 && ans.first<=ans.second) for(int i=ans.first;i<=ans.second;i++) cout << s[i];
        else cout << "null";
        cout << "\n";
    }
}