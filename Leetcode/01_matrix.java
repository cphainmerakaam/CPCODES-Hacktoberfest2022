class Solution {
    class Pair{
        int x,y;
    
    public Pair(int x ,int y){
        this.x=x;
        this.y=y;
    }}
    int[][] dir = {{1,0},{-1,0},{0,1},{0,-1}};
    public int[][] updateMatrix(int[][] matrix) {
        LinkedList<Pair> queue = new LinkedList<>();
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==0){
                    queue.addLast(new Pair(i,j));
                }else
                    matrix[i][j]=-1;
            }
        }
        while(queue.size()>0){
            Pair p =queue.removeFirst();
            
            for(int i=0;i<dir.length;i++){
                int x=p.x+dir[i][0];
                int y=p.y+dir[i][1];
                if(x>=0 && y>=0 && x<matrix.length && y<matrix[0].length && matrix[x][y]<0){
                    queue.addLast(new Pair(x,y));
                    matrix[x][y]=matrix[p.x][p.y]+1;
                }
            }
        }
        return matrix;
    }
}
