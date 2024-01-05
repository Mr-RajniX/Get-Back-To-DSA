int gcd(int A, int B) 
{ 
    // code here
    while(A%B != 0){
        int rem = A % B;
        A = B;
        B = rem;
    }
    return B;
} 