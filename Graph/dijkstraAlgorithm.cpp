class Solution
{
	public:
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s){
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>distTo(v+1, INT_MAX);
        distTo[s] = 0;
        pq.push({0, s});
        while(!pq.empty()){
            int dist = pq.top().first;
            int prev = pq.top().second;
            pq.pop();
            for(auto x : adj[prev]){
                int next = x[0];
                int nextDist = x[1];
                if(distTo[next] > dist + nextDist){
                    distTo[next] = dist + nextDist;
                    pq.push({distTo[next], next});
                }
            }
        }
        return distTo;
    }
};