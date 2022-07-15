class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        vector<int>bfs;
        vector<int>visited(v+1, 0);
        // for(int i=0;i<v;i++){
        //     if(!visited[i]){
        //         queue<int>q;
        //         q.push(i);
        //         visited[i] = 1;
        //         while(!q.empty()){
        //             int node = q.front();
        //             q.pop();
        //             bfs.push_back(node);
        //             for(auto x : adj[node]){
        //                 if(!visited[x]){
        //                     q.push(x);
        //                     visited[x] = 1;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return bfs;
        queue<int>q;
        q.push(0);
        visited[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto x : adj[node]){
                if(!visited[x]){
                    q.push(x);
                    visited[x] = 1;
                }
            }
        }
        return bfs;
    }
};