#include <limits.h>
int findSecondLargest(int *input,int n){
    if(n<=0)
        return INT_MIN;
    int maxx=input[0];
    int secmax=INT_MIN;
    for(int i=1;i<n;i++) {
        if(input[i]>maxx){
            secmax=maxx;
            maxx=input[i];
        }
        else if(input[i]>secmax && input[i] != maxx)
            secmax=input[i];
    }
    return secmax;
}