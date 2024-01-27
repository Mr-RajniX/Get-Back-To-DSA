class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int up=0, low=0, sp=0, num=0;
            for(int i=0; i<s.length(); i++){
                if(s[i] >= 65 && s[i] <= 90) up++;
                else if(s[i] >= 97 && s[i] <= 122) low++;
                else if(s[i] >= 48 && s[i] <= 57) num++;
                else sp++;
            }
            return { up, low, num, sp}; 
        }
};