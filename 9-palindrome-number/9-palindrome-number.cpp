class Solution {
public:
    bool isPalindrome(int n) {
        if(n < 0 || (n !=0 && n %10 == 0)){
            return false;
        }
       int m = n;

int computedValue = 0;

while(n > computedValue){
	int temp = n % 10;
	computedValue = computedValue*10 + temp;
	n /=10;
}
        
        if(computedValue == n || computedValue/10 == n){
            return true;
        }
        else
        {
            return false;
        }
        
    }
};