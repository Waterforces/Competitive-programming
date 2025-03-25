#include<bits/stdc++.h>
#define p pair<int,int>
using namespace std;
typedef struct node{
    bool ch;
    int g,s,b,sum,idx;
}node;
node x[1000];
int n;
int g,s,b,sum,name;
int _min=INT_MAX,_max;
vector<p> vg,vs,vb,v,vn;

void _sort() {
    sort(vg.begin(),vg.end());
    sort(vs.begin(),vs.end());
    sort(vb.begin(),vb.end());
    sort(v.begin(),v.end());
    sort(vn.begin(),vn.end());
}

void _set() {
    g=max(g,x[name].g);
    s=max(s,x[name].s);
    b=max(b,x[name].b);
    sum=max(sum,x[name].sum);
}

void input(int y) {
    cin >> name;
    cin >> x[name].g >> x[name].s >> x[name].b;
    x[name].sum=x[name].g+x[name].s+x[name].b;
    x[name].ch=1;
    x[name].idx=y;
    _min=min(_min,name);
    _max=max(_max,name);
    _set();
}

void process() {
    for(int i=_min;i<=_max;i++) {
        if(x[i].ch==1) {
            if(x[i].g==g) {
                vg.push_back({x[i].idx,i});
            }
            if(x[i].s==s) {
                vs.push_back({x[i].idx,i});
            }
            if(x[i].b==b) {
                vb.push_back({x[i].idx,i});
            }
            if(x[i].sum==sum) {
                v.push_back({x[i].idx,i});
            }
            if(x[i].sum>0) {
                vn.push_back({x[i].idx,i});
            }
        }
    }
}

void output() {
    while(true) {
        int a;
        cin >> a;
        if(a<=0) {
            cout << "good bye";
            return ;
        }
        if(a==1001) {
            for(int i=0;i<vg.size();i++) {
                cout << vg[i].second << " ";
            }
            cout << endl;
            continue ;
        }
        if(a==1002) {
            for(int i=0;i<vs.size();i++) {
                cout << vs[i].second << " ";
            }
            cout << endl;
            continue ;
        }  
        if(a==1003) {
            for(int i=0;i<vb.size();i++) {
                cout << vb[i].second << " ";
            }
            cout << endl;
            continue ;
        }
        if(a==2000) {
            for(int i=0;i<v.size();i++) {
                cout << v[i].second << " ";
            }
            cout << endl;
            continue ;
        }
        if(a==3000) {
            for(int i=0;i<vn.size();i++) {
                cout << vn[i].second << " ";
            }
            cout << endl;
            continue ;
        }
        if(x[a].ch==1) {
            cout << x[a].g << " " << x[a].s << " " << x[a].b << " " << x[a].sum << endl;
            continue ;
        }
        cout << "invalid code\n";
    }
}

int main( ) {
    cin >> n;
    for(int i=0;i<n;i++) {
        input(i);
    }
    process();
    _sort();
    output();
}