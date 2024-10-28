#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mini=INT_MAX;
    vector<int>vec;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x<mini)
        mini=x;
        vec.push_back(x);
    }
    // mini=*min_element(vec.begin(), vec.end());
    int i=0, j=vec.size()-1;
    int sr=0, dim=0;
    while(i<j){
        if(vec[j]>vec[i]){
            sr+=vec[j];
            j--;
        }else{
            sr+=vec[i];
            i++;
        }
        if(vec[j]>vec[i]){
            dim+=vec[j];
            j--;
        }else{
            dim+=vec[i];
            i++;
        }
    }
    if(n%2!=0)
    sr+=mini;
    cout<<sr<<" "<<dim<<endl;

    return 0;
}