

int peakIndexInMountainArray(int* arr, int arrSize){
     int s=0;
    int l=arrSize-1;
    int m;
    while(s<=l){
        m=(s+l)/2;
        if(arr[m-1]<arr[m] && arr[m]>arr[m+1]){
            return(m);
        }
        else if(arr[m]<arr[m+1])
            s=s+1;
        else if(arr[m]<arr[m-1])
            l=l-1;
        else
            return(m);
    }
    return(0);
}
