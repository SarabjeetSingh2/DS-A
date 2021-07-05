class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,k=0;
        int len=nums.size();
        if (len==0)
            return 0;
        else
        {
        for(j=1;j<len;j++){
                if(nums[i]==nums[j]){
                    continue;
                }
                nums[++i]=nums[j];
                    
                }
        return i+1;
    }
    }
};