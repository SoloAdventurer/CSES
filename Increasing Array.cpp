#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 
int main() {
    ll total=0;
    int n,mx=0;
    cin>>n;
 
    for(int i=0;i<n;++i){
        int x;cin>>x;
        mx=max(x, mx);
        total+=mx-x;
    }
 
    cout<<total;
    return 0;
}