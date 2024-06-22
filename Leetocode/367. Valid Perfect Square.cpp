class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0;
        int right = sqrt(num);
        
        
        while(left <= right)
        {
            
            if(left * left < num)
            {
                left++;
            }
            else if(left * left == num)
            {
                return true;
            }
        }
        return false;
    }
};
