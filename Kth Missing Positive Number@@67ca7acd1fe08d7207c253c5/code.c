// Your code here...
int findKthMissing(int arr[],int n, int k){
int n=0,i=0;
while(i<n){
    no_misses=arr[i]-n;
    for(int s=0;s<no_misses;s++){
        k--;n++;
        if(k==-1){
            printf("%d",n);
            return 0;
        }
    }
    n++;i++;
}
}