class Solution {
public:
    void dfs(int i,vector<int> adj[],vector<int>& visited){
        visited[i] = 1;
        for(auto it : adj[i]){
            if(!visited[it]){
                dfs(it,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> adj[v];
        for(int i=0 ;i<v;i++){
            for(int j=0 ;j<v;j++){
                if(isConnected[i][j] == 1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
         }
         vector<int> visited(v,0);
         int cnt =0;
         for(int i=0;i<v;i++){
            if(!visited[i]){
                cnt++;
                dfs(i,adj,visited);
            }
         }
         return cnt;

    }
};