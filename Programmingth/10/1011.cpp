#include<bits/stdc++.h>
using namespace std;
int n,m,Q,score,cou;
char s[10][10];
queue<pair<int,int> > q;
void drop(int x,int y);

void display() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << s[i][j] << " ";
        }
        cout << "\n";
    }
}

void del(int x,int y,char C) {
    if(x<0 || y<0 || x>=n || y>=m  || s[x][y]!=C) return ;
    if(s[x-1][y]!='#' && s[x-1][y]!='-') q.push({x-1,y});
    cou++;
    s[x][y]='-';
    del(x,y+1,C);
    del(x,y-1,C);
    del(x+1,y,C);
    del(x-1,y,C);
}

void match(int x,int y,char C) {
    if(x<0 || y<0 || x>=n || y>=m  || s[x][y]!=C) return ;
    del(x,y-1,C);
    del(x,y+1,C);
    del(x+1,y,C);
    if(cou<=1) return ;
}

void drop(int x,int y) {
    if(x<0 || x>=n || s[x+1][y]!='-' || s[x][y]=='#') {
        if(s[x][y]!='-' && s[x][y]!='#') match(x,y,s[x][y]);
        return ;
    }
    swap(s[x][y],s[x+1][y]);
    drop(x+1,y);
    if(s[x-1][y]!='-' && s[x-1][y]!='#') drop(x-1,y);
}

void move(int x,int y,char d) {
    if(s[x][y]=='#' || s[x][y]=='-') {
        score-=5;
        return ;
    }
    if(d=='L') {
        if(y-1<0 || s[x][y-1]!='-') {
            score-=5;
            return ;
        }
        swap(s[x][y],s[x][y-1]);
        drop(x-1,y);
        drop(x,y-1);
    }
    if(d=='R') {
        if(y+1>=m || s[x][y+1]!='-') {
            score-=5;
            return ;
        }
        swap(s[x][y],s[x][y+1]);
        drop(x-1,y);
        drop(x,y+1);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> s[i][j];
        }
    }
    cin >> Q;
    for(int I=0;I<Q;I++) {
        int x,y;
        char d;
        cin >> x >> y >> d;
        move(x,y,d);
        while(!q.empty()) {
            auto [i,j]=q.front(); q.pop();
            drop(i,j);
        }
    }
    cout << score+(cou*5) << "\n";
    display();
}