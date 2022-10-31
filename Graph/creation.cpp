#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int, list<int>> adj;
        
        void insertEdge(int u, int v, bool directed){
            
            adj[u].push_back(v);
            if(!directed){
                adj[v].push_back(u);
            }
        }

        void display(){
            for(auto i : adj){
                cout << i.first<<" ->";
                for(auto j:i.second)
                {
                    cout << j << ", ";
                }
                cout << endl;
            }
            
        }
        
};

int main(){
    graph obj;
    int u,v;
    obj.insertEdge(0, 1, false);
    obj.insertEdge(1, 2, false);
    obj.insertEdge(2, 3, false);
    obj.insertEdge(3, 1, false);
    obj.insertEdge(3, 4, false);
    obj.insertEdge(0, 4, false);
    
    obj.display();
}