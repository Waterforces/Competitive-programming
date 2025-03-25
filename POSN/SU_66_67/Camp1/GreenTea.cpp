#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int I=0;I<7;I++) {
        int water,sugar;
        cin >> water >> sugar;
        if(water<250 || sugar<15) {
            cout << 0;
            if(water>0) cout << " water";
            cout << "\n";
            continue ;
        }
        cout << min(water/250,sugar/15);
        if(water-(min(water/250,sugar/15)*250)>0) cout << " water";
        cout << "\n";
    }
}