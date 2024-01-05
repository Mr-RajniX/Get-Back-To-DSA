string longest(string names[], int n)
{
    int s = names[0].size(), index = 0;
    for (int i = 1; i < n; i++)
    {
        int size = names[i].size();
        if (s < size)
        {
            index = i;
            s = size;
        }
    }
    return names[index];
}