#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll even=0, odd=0, mini=INT_MAX;
    vector<int>od;
    for(int i=0;i<n; i++){
        int x;
        cin>>x;
        if(x%2==0){
            even+=x;
        }else{
            odd+=x;
            if(x<mini){
                mini=x;
            }
        }
    }
    if(odd%2!=0){
        odd-=mini;
    }
    cout<<even+odd<<endl;
    return 0;
}