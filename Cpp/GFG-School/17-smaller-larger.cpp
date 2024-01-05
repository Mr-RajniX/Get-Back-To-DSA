vector<int> getMoreAndLess(int arr[], int n, int x) {
    // code here
    int countf = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= x) countf++;
    }int countr = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= x) countr++;
    }return {countf, countr};
}