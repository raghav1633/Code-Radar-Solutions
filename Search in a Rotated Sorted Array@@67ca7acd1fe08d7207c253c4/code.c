// Your code here...
// Your code here...
int searchInRotatedArray(int arr[],int n,int target){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target)return mid;
        else if(arr[mid]>target)end=mid-1;
        else start=mid+1;
    }
    return -1;
}