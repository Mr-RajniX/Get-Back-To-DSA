class Solution{
public:	
		
	string removeVowels(string s) 
	{
	    int st = 0, e = s.length()-1;
        while(st<=e){
            if( isVowel(s[st]) ) {
                s.erase(st,1);
            }else st++;
            
            
            if( isVowel(s[e])) {
                s.erase(e,1);
            }else e--;
            
        }return s;
    }
    bool isVowel( char a ){
        if( a=='a' || a=='e' || a=='i'|| a=='o'|| a=='u') return true;
        return false;
    }
};