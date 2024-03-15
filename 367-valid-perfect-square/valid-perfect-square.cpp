class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n=num;
        if (n < 0)
	        return false;
        if (n == 0) 
	        return true;
        long long start = 1;
        long long end = n;
        while (start <= end) {
	        long long mid = (start + end) / 2;
	        long long sq = mid * mid;
	        if (sq == n)
		        return true;
	        else if (sq < n)
		        start = mid + 1;
	        else
		        end = mid - 1;
        }           
        return false;   
    }
};