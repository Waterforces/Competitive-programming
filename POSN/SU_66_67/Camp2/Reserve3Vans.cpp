#include<bits/stdc++.h>
using namespace std;
int s[3];
int n;
int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        if(s[0]==0)
        {
            s[0]+=a;
            cout << "A\n";
        }
        else if(s[1]==0)
        {
            s[1]+=a;
            cout << "B\n";
        }
        else if(s[2]==0)
        {
            s[2]+=a;
            cout << "C\n";
        }
        else
        {
            int _min=min(s[0],min(s[1],s[2]));
            s[0]-=_min;
            s[1]-=_min;
            s[2]-=_min;
            if(s[0]==0)
            {
                s[0]+=a;
                cout << "A\n";
            }
            else if(s[1]==0)
            {
                s[1]+=a;
                cout << "B\n";
            }
            else if(s[2]==0)
            {
                s[2]+=a;
                cout << "C\n";
            }
        }
    }
//van
}
