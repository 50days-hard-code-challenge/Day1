class Solution {
    
   
    // Function to return Breadth First Traversal of given graph.
    public ArrayList<Integer> bfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        // Code here
    ArrayList<Integer>list = new ArrayList < > ();
    
       //create a boolean array say visited[]
        boolean visited[] = new boolean[V];
        // create a queue , mark the source vertex visited as visited[s] = true and 
        // push it into queue
        Queue<Integer> q = new LinkedList<>();
         q.add(0);
        visited[0] = true;
        
        // until queue is empty, pop an element from queue and print it
        while(!q.isEmpty()){
            int front = q.remove();
            list.add(front);
            
            // Traverse all of the vertices adjacent to the vertex popped from the queue
            // if any of the adjacent vertex is not already visited, mark it visited and
            // and push it to the queue
            
            for(int i = 0; i<adj.get(front).size(); i++){
                 // Fetch adjacent node
                int val = adj.get(front).get(i);
                
                // Check if it is not visited
                if(!list.contains(val) && visited[val]!=true)
                {
                    // Mark it visited
                    visited[val] = true;
                    
                    // Add it to queue
                    q.add(val);
                }
            }
        }

        return list;
    }
        
        
    
}
