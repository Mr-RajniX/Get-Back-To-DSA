class Solution{
	public:
		int distance(int x1, int y1, int x2, int y2)
		{
		    // Code here.
		    int d = round ( sqrt( pow((x2 - x1),2) + pow((y2-y1),2) ) );
		    return d;
		}
};