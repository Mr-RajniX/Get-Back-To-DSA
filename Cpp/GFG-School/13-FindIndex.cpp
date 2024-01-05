vector<int> findIndex(int a[], int n, int key)
{
    // code here.
    int front = -1, rear = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            front = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == key)
        {
            rear = i;
            break;
        }
    }
    return {front, rear};
}