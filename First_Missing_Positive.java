class Solution {
    public int firstMissingPositive(int[] arr) {
        int i = 0;
        while( i < arr.length) {
            int c = arr[i] -1;
            if(arr[i] > 0 && arr[i] < arr.length && arr[c] != arr[i]){
                swap(arr, c, i);
            }
            else{
                i++;
            }
        }
        for(int j = 0; j < arr.length; j++){
            if (arr[j] != j +1){
                return j+1;
            }
        }
        return arr.length + 1 ;
    }
    public void swap(int[] arr, int c, int i){
        int temp = arr[c];
        arr[c] = arr[i];
        arr[i] = temp;
    }
}
