string armstrongNumber(int n)
{
    // code here
    int sum = 0;
    int copy = n;
    int size = count(n);
    while (n)
    {
        int rem = n % 10;
        sum += pow(rem, size);
        n /= 10;
    }
    if (copy == sum)
        return "Yes";
    return "No";
}

int count(int n)
{
    int c = 0;
    while (n)
    {
        c++;
        n /= 10;
    }
    return c;
}