#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll unsigned int n,ans,i=1;

int main() {
    scanf("%u",&n);
    while(pow(5,i)<=n) {
        ans+=(n/pow(5,i));
        i++;
    }
    printf("%u",ans);
}   