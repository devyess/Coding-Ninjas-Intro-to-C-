#include<cmath>
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int size3=max(size1,size2)+1;
    int i=size1-1;
    int j=size2-1;
    int k=size3-1;
    int carry=0;
    int sum=0;
    while(i>=0 && j>=0){
        sum=input1[i]+input2[j]+carry;
        carry=sum/10;
        output[k]=sum%10;
        i--;
        j--;
        k--;
    }
    while(i>=0){
        sum=input1[i]+carry;
        carry=sum/10;
        output[k]=sum%10;
        i--;
        k--;
    }
    while(j>=0){
        sum=input1[j]+carry;
        carry=sum/10;
        output[k]=sum%10;
        j--;
        k--;
    }
    if(carry)
        output[k]=carry;
}