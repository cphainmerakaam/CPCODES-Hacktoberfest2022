class Solution {
    public int[][] generateMatrix(int n) {
        int[][] matrix =new int[n][n];
        
        int left=0;
        int right=matrix[0].length-1;
        int top=0;
        int bottom=matrix.length-1;
        
        int num=0;
        while(true){
            
            for(int i=left;i<=right;i++){
                ++num;
                matrix[top][i]=num;
                
            }
            top++;
            if(top>bottom)break;
            for(int i=top;i<=bottom;i++){
                ++num;
                matrix[i][right]=num;
            }
            right--;
            if(right<left)break;
            for(int i=right;i>=left;i--){
                ++num;;
                matrix[bottom][i]=num;
            }
            bottom--;
            if(bottom<top)break;
            for(int i=bottom;i>=top;i--)
            {   ++num;
                matrix[i][left]=num;
            }
            left++;
            if(left>right)
            break;
        }
        return matrix;
    }   
    }
