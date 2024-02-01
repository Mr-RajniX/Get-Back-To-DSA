class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> S(a, a+n);
        S.insert(b, b+m);
        return S.size();
    }
};