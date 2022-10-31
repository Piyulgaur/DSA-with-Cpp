#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int size;
    cout<<"enter the size";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i]<<" ";
       
    }

}