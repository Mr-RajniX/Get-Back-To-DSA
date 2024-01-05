int evenlyDivides(int N)
{
    // code here
    int t = N;
    int count = 0;
    while (t != 0)
    {
        int rem = t % 10;
        t /= 10;
        if (rem == 0)
            continue;
        if (N % rem == 0)
            count++;
    }
    return count;
}