// Input:
// 5
// 111 222 333 444 555

// Output:
// 1

// Explanation:
// A[0] = 111 //which is a palindrome number.
// A[1] = 222 //which is a palindrome number.
// A[2] = 333 //which is a palindrome number.
// A[3] = 444 //which is a palindrome number.
// A[4] = 555 //which is a palindrome number.
// As all numbers are palindrome so This will return 1.

int PalinArray(int a[], int n)
{
    // code here
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != reverse(a[i]))
            return 0;
    }
    return 1;
}
int reverse(int n)
{
    int x = 0;
    while (n)
    {
        int rem = n % 10;
        x = x * 10 + rem;
        n /= 10;
    }
    return x;
}