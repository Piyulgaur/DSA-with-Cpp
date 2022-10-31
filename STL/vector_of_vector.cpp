#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int size;
    cout<<"enter the size";
    cin>>size;
    vector<vector<int>>v;
    for(int i=0;i<size;i++)
    {
        cout<<"enter size of vector "<<i;
        int n;
        cin>>n;
        vector<int>temp;
    for(int j=0;j<n;j++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
    }
    
    
    for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++)
    {
       cout<<v[i][j]<<" ";
       
    }
    cout<<endl;
    }
}