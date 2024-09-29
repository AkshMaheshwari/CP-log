class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int flag = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)return true;

        return false;
    }
};
