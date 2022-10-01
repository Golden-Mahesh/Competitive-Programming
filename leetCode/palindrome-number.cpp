class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        long new_number=0;
        while(n){
            new_number=new_number*10+n%10;
            n=n/10;
            }
        
        if(new_number==x){
            if(x>=0)
            return(true);
        }
        return(false);
    }
};
