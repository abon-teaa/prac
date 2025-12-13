class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n= nums.size();
        if(n<1 || n>1000)
        {
            cout<<"Too long array!";
            return {};
        }
        vector<int> num2(2 * n);
        int j = 2*n;
        int v=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]<1 || nums[i]>1000)
            {
                cout<<"invalid number!";
                return{};
            }
            else
            {
                num2[i]=nums[i];
            }
        }
        for(int i=n; i<j; i++)
        {
            num2[i]=nums[v];
            v++;
        }
        return num2;
    }
};