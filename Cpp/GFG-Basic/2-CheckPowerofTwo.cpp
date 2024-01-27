class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here  
        if( n <= 0) return false;
        return (n & (n-1)) == 0;
        
    }

    bool isPowerofTwo(long long n){
        if (n == 0) return 0;
        while( n!= 1){
            if( n%2 != 0) return 0;
            n /= 2;
        } return 1;
    }
};