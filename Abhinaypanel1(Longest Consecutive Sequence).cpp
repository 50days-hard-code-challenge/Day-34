class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,bool>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]=true;
        }
        for(int i=0;i<n;i++){
            if(mpp.count(nums[i]-1)>0){
                mpp[nums[i]]=false;
            }
        }
        int maxlen=0;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]==true){
                int j=0;
                int count=0;
                while(mpp.count(nums[i]+j)>0)
                {
                     j++;
                     count++;
                }
                if(count>maxlen){
                    maxlen=count;
                }
            }
        }
        return maxlen;
    }
};
