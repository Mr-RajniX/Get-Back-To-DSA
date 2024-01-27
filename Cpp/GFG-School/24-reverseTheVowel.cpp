class Solution
{
    public:
        string modify (string s)
        {
            //code here.
            int st = 0, e = s.length()-1;
            while(st<=e){
                if( isVowel(s[st]) && isVowel(s[e]) ) {
                    swap(s[st] , s[e]);
                    st++; e--;
                }else{
                    if( isVowel(s[st])) 
                        e--;
                    else 
                        st++;
                }
            }return s;
        }
        bool isVowel( char a ){
            if( a=='a' || a=='e' || a=='i'|| a=='o'|| a=='u') return true;
            return false;
        }
};