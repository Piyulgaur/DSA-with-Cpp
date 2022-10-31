#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    int size;
    cout<<"enter the size";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i].first<<" "<<v[i].second<<endl;
       
    }

}