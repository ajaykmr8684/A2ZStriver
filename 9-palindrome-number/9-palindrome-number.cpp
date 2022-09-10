class Solution {
public:
    bool isPalindrome(int x) {
     
        if(x <0 || (x!=0 && x % 10 ==0)){
            return false;
        }
        
        int res=0;
        while(x > res){
            int rem = x % 10;
            
            res = res * 10 + rem;
            
            x /=10;
        }
        
        if(x == res || x == res/10){
            return true;
        } else{
            return false;
        }
    }
};