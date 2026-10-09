class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++)
        {
            int j=i;
            int num=nums[i];
            int n=nums.size();
            while(n>0)
            {
                j=j%nums.size();
                if(nums[j]>nums[i]) 
                {
                    ans[i]=nums[j];
                    break;
                }
                j++;
                n--;
            }
        }
        return ans;
    }
};