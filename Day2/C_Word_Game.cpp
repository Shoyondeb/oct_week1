#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        deque<string>vec;
        int n;
        cin>>n;

        map<string,int>mp;
        for(int i=1; i<=3; i++){
            for(int j=1; j<=n; j++){
                string str;
                cin>>str;
                vec.push_back(str);
                mp[str]++;
            }
        }

        int p1=0,p2=0,p3=0;
        for(int i=1; i<=3; i++){
            for(int j=1; j<=n; j++){
                string str=vec.front();
                vec.pop_front();
                if(i==1){
                    if(mp[str]==1){
                        p1+=3;
                    }else if(mp[str]==2){
                        p1+=1;
                    }
                }else if(i==2){
                    if(mp[str]==1){
                        p2+=3;
                    }else if(mp[str]==2){
                        p2+=1;
                    }
                }else if(i==3){
                    if(mp[str]==1){
                        p3+=3;
                    }else if(mp[str]==2){
                        p3+=1;
                    }
                }
            }
        }
        cout<<p1<<" "<<p2<<" "<<p3<<endl;
    }
    return 0;
}