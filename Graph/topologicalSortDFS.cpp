class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	void solve(int node, vector<int> &visited, stack<int> &toposort, vector<int> adj[]){
	    visited[node] = 1;
	    for(auto x : adj[node]){
	        if(!visited[x]){
	            solve(x, visited, toposort, adj);
	        }
	    }
	    toposort.push(node);
	}
	vector<int> topoSort(int v, vector<int> adj[]) {
	    stack<int>toposort;
	    vector<int>visited(v, 0);
	    vector<int>sorted;
	    for(int i=0;i<v;i++){
	        if(!visited[i]){
	            solve(i, visited, toposort, adj);
	        }
	    }
	    while(!toposort.empty()){
	        sorted.push_back(toposort.top());
	        toposort.pop();
	    }
	    return sorted;
	}
};