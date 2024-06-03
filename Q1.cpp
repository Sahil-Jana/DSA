void reverseArray(vector<int> &arr , int m){
    for (int i=0; i<(arr.capacity()-m-1)/2; i++){
        int temp = arr[m+i+1];
        arr[m+i+1] = arr[arr.capacity()-i-1];
        arr[arr.capacity()-i-1] = temp;
    }
}