class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int > seen;
        for(int i=0;i<nums.size();i++)
        {
            int revnum=0;
            if(seen.find(nums[i])==seen.end())
            {
                seen.insert(nums[i]);
            }
            int num=nums[i];
            while(num)
            {
                int dig=num%10;
                revnum=revnum*10+dig;
                num/=10;
            }
            if(seen.find(revnum)==seen.end()) seen.insert(revnum);
        }
        return seen.size();
    }
};