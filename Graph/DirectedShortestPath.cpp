#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, list<pair<int,int>>> adj ;

    void addEdge(int u, int v, int weight){
        adj[u].push_back({v, weight});
    }

    void print(){

        for(auto i : adj){
            cout << i.first << "->";
            for(auto node: i.second){
                cout << "[" << node.first <<"," <<  node.second << "]";
            }
            cout<< endl;
        }
    }

    void dfs(int i, stack<int> &s, unordered_map<int, bool> &visited){
        visited[i] = true;

        for(auto n : adj[i]){
            if(!visited[n.first]){
                dfs(n.first,s,visited);
                
            }
        }
        s.push(i);
    }

    void shortestpath(int src, vector<int> &dist, stack<int> &s){
        dist[src] = 0;

        while(!s.empty()){
            int top = s.top();
            s.pop();

            if(dist[top] != INT_MAX){
                for(auto i : adj[top]){
                    if(dist[top] + i.second < dist[i.first]){
                        dist[i.first] = dist[top] + i.second;
                    }
                      
                }
            }
        }
    }

};

int main(){
    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);
    
    g.print();

    int n = 6;
    //topo
    stack<int> s;
    unordered_map<int, bool> visited;
    for(int i = 0; i < n ; i++){
        if(!visited[i]){
            g.dfs(i, s, visited);
        }
    }

    int src = 1;
    vector<int> dist(n);

    dist[src] = 0;
    for(int i = 0; i<n; i++){
        dist[i] = INT_MAX;
    }

    g.shortestpath(src, dist, s);
    
    for(int i = 0; i < n; i++){
        cout << dist[i]<< " ";
    }





    return 0;
}
