class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>v;
        int i;
        for( i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                v.push_back(i);
                break;
            }
        }
        if(i==nums.size())
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        else
        {
            for( i=nums.size()-1;i>=0;i--)
            {
                if(nums[i]==target)
                {
                    v.push_back(i);
                    break;
                }
            }
            if(i<0)
                v.push_back(-1);
        }
        return v;
    }
};
