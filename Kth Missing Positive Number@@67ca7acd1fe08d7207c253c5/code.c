// Your code here...
int findKthMissing(int arr[],int n, int k){
int num=1,i=0,no_misses;
while(i<n){
    no_misses=arr[i]-num;
    for(int s=0;s<no_misses;s++){
        k--;num++;
        if(k==0){
            return num-1;
        }
    }
    num++;i++;
}
if(k>0){
    return arr[n-1]+k;
}
}