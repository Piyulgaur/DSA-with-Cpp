#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int size;
    cout<<"enter the size";
    cin>>size;
    vector<int>v[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter size of vector "<<i;
        int n;
        cin>>n;
        
    for(int j=0;j<n;j++)
    {
        int x;
        cin>>x;
        v[i].push_back(x);
    }
    }
    
    
    for(int i=0;i<size;i++){
    for(int j=0;j<v[i].size();j++)
    {
       cout<<v[i][j]<<" ";
       
    }
    cout<<endl;
    }
}