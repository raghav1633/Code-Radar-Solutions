// Your code here...
int selectionSort(int arr[],int n){
    int sm;
    for(int i=0;i<N;i++){
        sm=arr[i];
        for(int j=i+1;j<N;j++){
            if(sm<arr[j]){
                sm=arr[j];
            }
        }
        arr[i]=sm;
    }
}