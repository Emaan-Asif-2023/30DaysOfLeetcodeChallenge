class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int maxProd = nums[0];
        int product;

        for (int i = 0; i < n; i++) {
            product = 1;
            for (int j = i; j < n; j++) {
                product *= nums[j];
                maxProd = max(maxProd, product);
            }
        }

        return maxProd;
    }
};