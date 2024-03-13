class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        bool present[n + 1];
    
        for (int i = 0; i <= n; i++) {
            present[i] = false;
        }
    
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0 && nums[i] <= n)
                present[nums[i]] = true;
        }
    
        for (int i = 0; i <= n; i++) {
            if (!present[i])
                return i;
        }
        return -1; // No missing number found
    }
};