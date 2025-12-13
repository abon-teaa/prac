class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() <1 || nums.size() >100000)
        {
            return 0;
        }
        int x=0,y=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==0 || nums[i]==1)
            {
                if(nums[i]==1)
                {
                    x++;
                    if(x>y)
                    {
                        y=x;
                    }
                }
                else
                {
                    x=0;
                }
            }
            else
            {
                return 0;
            }
        }
        return y;
    }
};