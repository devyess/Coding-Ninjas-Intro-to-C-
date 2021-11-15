void leftrotate(int *arr, int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }
}
void rotate(int *input, int d, int n)
{
    leftrotate(input, 0, n-1);
    leftrotate(input, n-d, n-1);
    leftrotate(input, 0, n-d-1);
}