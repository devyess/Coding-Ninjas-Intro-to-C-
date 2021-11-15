void pushZeroesEnd(int *input, int n)
{
    int count=0;
    for(int i=0; i<n;i++){
        if(input[i] != 0){
            input[count] = input[i];    //count no of non zeros and place them from 0
            count++;
        }
    }
    while(count<n){
        input[count]=0;    //after countin no. of non zeros copy 0 for rest of the elemnt
        count++;
    }
}