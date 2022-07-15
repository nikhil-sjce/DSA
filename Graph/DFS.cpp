class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int>adj[], vector<int> &visited, vector<int> &dfsTraversal){
        dfsTraversal.push_back(node);
        visited[node] = 1;
        for(auto x : adj[node]){
            if(!visited[x]){
                dfs(x, adj, visited, dfsTraversal);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        vector<int>visited(v+1, 0);
        vector<int>dfsTraversal;
        for(int i=0;i<v;i++){
            if(!visited[i]){
                dfs(i, adj, visited, dfsTraversal);
            }
        }
        return dfsTraversal;
    }
};