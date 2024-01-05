public String is_palindrome(int n)
{
    // Code here
    if(n == rev(n)) return "Yes";
    return "No";
}
int rev(int n){
    int x = 0;
    while(n!=0){
        int rem = n % 10;
        x = x*10 + rem;
        n /= 10;
    }return x;
}