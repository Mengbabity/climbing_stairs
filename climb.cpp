class Solution {
public:
    int climbStairs(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        
        int one=2;  
        int two=1;
        int count=0;
        
        for(int i=3;i<=n;i++)
        {
            count=one+two;
            two=one;
            one=count;
        }
        
        return count;
    }
};
