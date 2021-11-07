int BinarySearch(int *input,int num , int val){
    int start=0;
    int end=num-1;
    int mid=start;
    while(start<=end){ 
        mid= start + (end-start)/2;
        if(input[mid]>val) 
            end=mid-1;
        else if(input[mid]<val)
            start=mid+1;
        else
            return mid;
    }
    return -1;
}