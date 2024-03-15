class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int Min = 99;
        for (int i = 0; i < size; i++)
        {
	        Min = min(Min, nums[i]);
        }
        return Min;
   
    }
};