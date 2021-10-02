class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        ArrayList<Integer> arr = new ArrayList<Integer>();
      for(int i=num.length-1;i>=0;i--)
      {
          arr.add((num[i]+k)%10);
          k=(num[i]+k)/10;
      }
        while(k>0)
        {
            arr.add(k%10);
            k=k/10;
            
        }
           Collections.reverse(arr);
        return arr;
    }
}
