long long seriesSum(int n)
{
    // code here
    if (n == 0 || n == 1)
        return n;
    long long x = ((long)n * (n + 1)) / 2;
    return x;
}