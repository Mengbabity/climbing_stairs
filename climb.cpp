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
            two=one;   //两步中当前的第二步为之前第一步
            one=count;   //两步中当前第一步为上一次的top
        }
        
        return count;
    }
};
