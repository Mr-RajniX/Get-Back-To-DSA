class Solution{
public:
    string getBinaryRep(int N)
    {
        string str(30,'0');
        int i = 29;
        while( N>0 ){
            int rem = N & 1;
            if( rem == 1) 
                str[i] = '1';
            else if(rem == 0) 
                str[i] = '0';
            N =  N >> 1;
            i--;
        }
        return str;
    }
};