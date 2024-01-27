class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int sum = 0, rev = 0;
        while(N){
            int digit = N % 10;
            sum += digit;
            N /= 10;
        }
        int temp = sum;
        while(temp) {
            int rem = temp % 10;
            rev = rev*10 + rem;
            temp /= 10;
        }
        if(sum == rev) return 1;
        return 0;
    }
};