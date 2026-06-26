class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> v;
        // fix one + two pointer with skip duplicate
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = -nums[i];
            int j = i+1;
            int k = n-1;
            while(j<k){
                if(nums[j]+nums[k]==target){
                    v.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(nums[j-1]==nums[j] && j<k){j++;} // skip duplicate
                }
                else if(nums[j]+nums[k]>target){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return v;
    }
};
