class Solution {
  public:
    long long isSumPalindrome(long long n){
        // code here
        for(int itr = 0; itr <= 5; itr++){
            long long rev = reverse(n);
            if(n == rev){
                return n;
            }
            n = n + rev;
        }return -1;
    }
    
    long long reverse(long long n){
        long long rev = 0;
        while(n){
            long long rem = n % 10;
            rev = rev*10 + rem;
            n /= 10;
        } return rev;
    }
};