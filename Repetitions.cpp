#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned int uI;
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   uI maxAmt=1, m=1;
   string sNau;
   cin>>sNau;
 
   for(uI i=1; i<sNau.length(); i++){
        if(sNau[i]!=sNau[i-1]){
            m=max(m,maxAmt);
            maxAmt=1;
        }
        else
            maxAmt++;
   }
 
    cout<<max(m,maxAmt);
    return 0;
}