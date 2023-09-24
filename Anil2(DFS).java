class Solution {
    // Function to return a list containing the DFS traversal of the graph.
    public ArrayList<Integer> dfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        // Code here
        ArrayList<Integer> list = new ArrayList<>();
        boolean visited[] = new boolean[V];
        dfs(0,adj,visited,list);
        return list;
    }
    
    public static void dfs(int node, ArrayList<ArrayList<Integer>>adj, boolean visited[], ArrayList<Integer>dfslist){
        visited[node] = true;
        dfslist.add(node);
        
        for(Integer temp : adj.get(node)){
            if(!visited[temp]){
                dfs(temp,adj,visited,dfslist);
            }
        }
    }
}
