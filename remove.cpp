class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]==val)
            {
                if(nums[j]==val)
                {
                    j=j-1;
                }
                else{
                nums[i]=nums[j];
                    i=i+1;
                    j=j-1;
                }
            }
}
        return i+1;
    }
};