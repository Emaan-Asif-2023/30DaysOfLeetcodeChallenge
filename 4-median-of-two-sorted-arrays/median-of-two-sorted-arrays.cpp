class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;
        
        // Merge nums1 and nums2 into a single sorted array
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                arr.push_back(nums1[i]);
                i++;
            } else {
                arr.push_back(nums2[j]);
                j++;
            }
        }

        // Append remaining elements from nums1, if any
        while (i < m) {
            arr.push_back(nums1[i]);
            i++;
        }

        // Append remaining elements from nums2, if any
        while (j < n) {
            arr.push_back(nums2[j]);
            j++;
        }

        // Calculate the median
        int totalSize = m + n;
        if (totalSize % 2 == 0) {
            return (arr[totalSize / 2] + arr[totalSize / 2 - 1]) / 2.0;
        } else {
            return arr[totalSize / 2];
        }
    }
};
