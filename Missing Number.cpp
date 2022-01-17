#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long n,i;
    cin>>n;
 
    string line;
    getline(cin,line);
    getline(cin,line);
    istringstream os(line);
 
    long total=(n)*(n + 1)/2;
    while(os>>i)
        total-=i;
 
    cout<<total;
}