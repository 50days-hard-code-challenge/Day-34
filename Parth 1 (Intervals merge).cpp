class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> mergeInter;

        if(intervals.size( ) == 0)
        return intervals;

        sort (intervals.begin(),intervals.end());

        vector<int> temp = intervals[0];

        for(auto i: intervals){

            if(i[0] <= temp[1]){
                temp [1] = max (temp[1],i[1]);
            }
            else{
                mergeInter.push_back(temp);
                temp = i;
            }
        }
        mergeInter.push_back(temp);
                return mergeInter;

        
    }
};
