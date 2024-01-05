vector<int> valueEqualToIndex(int arr[], int n)
{
    // code here
    vector<int> values;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == arr[i])
            values.push_back(i + 1);
    }
    return values;
}