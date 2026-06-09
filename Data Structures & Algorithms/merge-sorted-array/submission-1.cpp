class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // nums 1 m and nums 2 n elemenets and n+m spaces
        for(int i =m; i<m+n; i++){
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(), nums1.end());
    }
};