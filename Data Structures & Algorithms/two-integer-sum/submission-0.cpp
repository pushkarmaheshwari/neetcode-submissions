class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum(2,0);
        for(int i=0; i<size(nums); i++){
            for(int j=i+1; j<size(nums); j++){
                if(nums[i]+nums[j]==target){
                    sum[0]=i;
                    sum[1]=j;
                    return sum;
                }
            }
        }
    }
};
