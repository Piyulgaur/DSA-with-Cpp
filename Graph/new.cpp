

#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void insertEdge(int u, int v, bool directed)
    {

        adj[u].push_back(v);
        if (!directed)
        {
            adj[v].push_back(u);
        }
    }

    void display(vector<vector<int>> adj)
    {
        for (auto i : adj
        {
            cout << adj[i] << " ->";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

    vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges)
    {
        // Write your code here.
        vector<int> ans[n];
        for (int i = 0; i < m; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];

            ans[u].push_back(v);
            ans[v].push_back(u);
        }

        vector<vector<int>> adj;
        for (int i = 0; i < n; i++)
        {
            adj[i].push_back(i);
            for (int j = 0; j < ans[i].size(); j++)
            {
                adj[i].push_back(ans[i][j]);
            }
        }
        display(adj);
        return adj;
    }
};

int main()
{
    graph obj;
    int u, v;
    // obj.insertEdge(0, 1, false);
    // obj.insertEdge(1, 2, false);
    // obj.insertEdge(2, 3, false);
    // obj.insertEdge(3, 1, false);
    // obj.insertEdge(3, 4, false);
    // obj.insertEdge(0, 4, false);

    vector<vector<int>> edges = {{1,2},{0 ,3},{2 ,3}};
    obj.printAdjacency( 4, 3, edges);
    // obj.display();
}