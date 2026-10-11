class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int > arr1;
        vector<int > arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int last1=nums[0];
        int last2=nums[1];
        for(int i=2;i<nums.size();i++)
        {
            if(last1>last2)
            {
                arr1.push_back(nums[i]);
                last1=nums[i];
            }
            else
            {
                arr2.push_back(nums[i]);
                last2=nums[i];
            }
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};