#include<bits/stdc++.h>
using namespace std;
int sum;
int c,k;
int n,m;
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        int a[3];
        c=0;
        cin >> a[0] >> a[1] >> a[2];
        if(k<m)
        {
            for(int j=0; j<3; j++)
            {
                if(a[j]>=8)
                {
                    c++;
                }
            }
            if(c>=2)
            {
                cout << "Yes" << endl;
                k++;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }

    }
    cout << k;
}
