#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
typedef struct node {
    int l=-1,r=-1;
} node;
node x[10005];
int Q,root=-1;

void inorder(int cur) {
    if(x[cur].l!=-1) inorder(x[cur].l);
    cout << cur << " ";
    if(x[cur].r!=-1) inorder(x[cur].r);
}

void preorder(int cur) {
    cout << cur << " ";
    if(x[cur].l!=-1) preorder(x[cur].l);
    if(x[cur].r!=-1) preorder(x[cur].r);
}

void postorder(int cur) {
    if(x[cur].l!=-1) postorder(x[cur].l);
    if(x[cur].r!=-1) postorder(x[cur].r);
    cout << cur << " ";
}

bool fnBST(int cur,int ans) {
    if(x[cur].l!=-1) inorder(x[cur].l);
    if(cur==ans) return 1;
    if(x[cur].r!=-1) inorder(x[cur].r);
    return 0;
}

int main() {
    cin >> Q;
    while(Q--) {
        int n,cur=root;
        char s;
        cin >> s >> n;
        if(s=='I') {
            if(root==-1) root=n;
            else {
                while(true) {
                    if(n>cur) {
                        if(x[cur].r==-1) {
                            x[cur].r=n;
                            break ;
                        }
                        cur=x[cur].r;
                    }
                    else {
                        if(x[cur].l==-1) {
                            x[cur].l=n;
                            break ;
                        }
                        cur=x[cur].l;
                    }
                }
            }
        }
        else if(s=='R') {

        }
        else if(s=='F') {
            if(fnBST(root,n)) cout << "Y\n";
            else cout << "N\n";
        }
        else {
            if(n==1) inorder(root);
            else if(n==2) preorder(root);
            else postorder(root);
            cout << endl;
        }
    }
}

/*
11
I 5
I 7
I 3
I 2
I 1
I 4
I 6
I 8
P 1
P 2
P 3
*/