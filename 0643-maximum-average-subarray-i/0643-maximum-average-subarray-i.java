class Solution {
    public double findMaxAverage(int[] nums, int k) {
        
        int j = k-1;
        int sum = 0;
        int maxNum = Integer.MIN_VALUE;

        for(int i = 0 ; i < k ; i++ ){
            sum = sum + nums[i];
        }
        maxNum = sum;
        
        for( int i = k ; i < nums.length ; i++){
            sum = sum + nums[i];
            sum = sum - nums[i-k];
            maxNum  = Math.max(maxNum,sum);

        }
        

         
        return (double) maxNum /  k;


        
    }
}