class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int > seen;
        for(int i=0;i<nums.size();i++)
        {
            int revnum=0;
            seen.insert(nums[i]);
            int num=nums[i];
            while(num)
            {
                int dig=num%10;
                revnum=revnum*10+dig;
                num/=10;
            }
            seen.insert(revnum);
        }
        return seen.size();
    }
};