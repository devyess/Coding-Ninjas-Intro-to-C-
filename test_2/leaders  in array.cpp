void Leaders(int* arr,int len) {
    int j=0;
    int *save = new int[len];
    int largest=INT_MIN;
    //largest contains the maximum value of leading array. 
    for(int i=len-1;i>=0;i--) {
        if(arr[i]>=largest){
            // if element at current index is greater than largest then put it in array and make ot largest;
            save[j]=arr[i];
            j++;
            largest=arr[i];
        }
    }
    for(int i=j-1;i>=0;i--) {
        // Print the array in reverse order... 
        cout<<save[i] << " "; 
    }
}

