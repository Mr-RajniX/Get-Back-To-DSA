string revStr(string S) {
    // code here
    int st = 0, e = S.length()-1;
    while(st <= e){
        swap(S[st], S[e]);
        st++; e--;
    }return S;
}