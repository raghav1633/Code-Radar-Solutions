// Your code here...
int findKthMissing(int arr[],int n, int k){
    for(int i=0;i<n-1;i++){
        if((arr[i+1]-arr[i])>1){
            int rs=arr[i+1]-arr[i];int num=arr[i];
            while(rs>1 && k>0){
                rs--;k--;
                num++;
            }
            if(k==0)return num;
           
        }
    }
}