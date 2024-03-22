class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size=intervals.size();
        if (size <= 1) return intervals;
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> array;
        array.push_back(intervals[0]);

        for(int i=1;i<size;i++){

            if(intervals[i][0]<=array.back()[1]){
                array.back()[1] = max(array.back()[1], intervals[i][1]);
            }
            else{
                array.push_back(intervals[i]);
            }
        }
        return array;
        
    }    
    
};