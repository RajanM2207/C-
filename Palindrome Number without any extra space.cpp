class Solution {
public:
    bool isPalindrome(int x) {
        if(x<10 && x>=0) 
            return true;
        int temp = x;
        int reverse_num=0;
       while(x!=0){
           reverse_num=(reverse_num*10)+(x%10);
                      x=x/10;

       }
        if(reverse_num>=INT_MAX || reverse_num<0)
            return false;
        else if(reverse_num==temp)
            return true; 
        else return false;
        }
        
    };
