void printPat(int n)
{
    // Your code here
    for (int row = n; row > 0; row--)
    {
        int val = n, count = 0;
        for (int col = 0; col < (row * n); col++)
        {
            count++;
            if (count > row)
            {
                val--;
                count = 1;
            }
            cout << val << " ";
        }
        cout << "$";
    }
}