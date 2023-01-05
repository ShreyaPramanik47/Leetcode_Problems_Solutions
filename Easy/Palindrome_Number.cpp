class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
      long long ans=0;
      int num=x;
      while(num!=0){
          int digit = num%10;
           ans = (ans*10)+digit;
          num = num/10;
      }
      if(ans==x){
          return 1;
      }
      return 0;
    }
};


// Problem Link : https://leetcode.com/problems/palindrome-number/description/  
