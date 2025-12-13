class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(n<1 || n>1000)
        {
            cout<<"Too long array!";
            return {};
        }
        else if(nums.size() != 2*n)
        {
            cout<<"Not accurate n!";
            return {};
        }
        int x = n;
        int y = 0;
        vector<int> num2(2*n);
        for (int i=0; i<n*2;i++ )
        {
          num2[i]=nums[y];
          i++;
          y++;
          num2[i]=nums[x];
          x++;
        }
        return num2;
    }
};