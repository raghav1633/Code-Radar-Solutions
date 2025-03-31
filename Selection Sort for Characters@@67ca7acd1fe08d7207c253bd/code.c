void printArray(int arr[],int n){
    for(int i=0;i<n;i++)printf("%c ",arr[i]);
}
void selectionSort(int arr[],int n){
    int temp,k;
    for(int i=0;i<n-1;i++){
        int sm=arr[i];k=i;
        for(int j=i+1;j<n;j++){
            if(sm>arr[j]){
                sm=arr[j];k=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
}
