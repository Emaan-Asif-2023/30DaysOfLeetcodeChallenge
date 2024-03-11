class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (i != j && nums[i] == nums[j]) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                return nums[i]; 
            }
    }
    return -1; 
   
    }
};