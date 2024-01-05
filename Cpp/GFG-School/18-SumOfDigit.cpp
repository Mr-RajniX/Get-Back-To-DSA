int sumOfDigits(int N){
    //code here
    long sum = 0;
    while(N){
        int rem = N % 10;
        sum += rem;
        N /= 10;
    }return sum;
}