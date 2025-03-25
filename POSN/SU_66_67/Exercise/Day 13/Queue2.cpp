#include<bits/stdc++.h>
using namespace std;
queue<string> q;
int i=1;

int main() {
    string s;
    while(cin >> s) {
        if(s=="stop") break ;
        q.push(s);
        cout << i << " " << q.front();
        q.pop();
        i++;
    }
}