class Solution {// optimal 2 pointer 
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i <nums.size()-2; i++){
            if(i >0 && nums[i]==nums[i-1]) continue;
            int left = i+1;
            int right =nums.size()-1;
            while(left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                    vector <int> temp ={nums[i],nums[left],nums[right]};
                    ans.push_back(temp);
                    left++;
                    right--;
                    while(left<nums.size()&& nums[left]==nums[left-1]) left++;
                    while(right>=0&& nums[ right]==nums[right+1]) right--;
                }
                else if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }
                else {
                    left++;
                }

            }
        }
        return ans;
    }
};
