class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i =0 ;int j =-1;
        for (i =0; i <nums.size(); i++){
            if (nums[i]>=0){
                j=i-1;
                break;
            }
            
        }
        if(i ==nums.size()){
                j=nums.size()-1;
            }
        vector <int> ans ;
        for(int k =0; k <nums.size(); k++){
            nums[k]=nums[k]*nums[k];
        }
        while(i <nums.size() && j >=0){
            if(nums[j]> nums[i]) {
                ans.push_back (nums[i]);
                i++;
            }
            else {
                ans.push_back(nums[j]);
                j--;
            }
        }
        while(i <nums.size()){
            ans.push_back(nums[i]);
            i++;
        }
        while(j>=0){
            ans.push_back(nums[j]);
            j--;
        }
        return ans;
    }
};