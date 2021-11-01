/*
Print the following pattern
Pattern for N = 4
...*
..***
.*****
*******
The dots represent spaces.

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1 :
3

Sample Output 1 :
   *
  *** 
 *****

Sample Input 2 :
4

Sample Output 2 :
    *
   *** 
  *****
 *******
-----------------------------------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=1;
        while(space<=n-row){
            cout<<" ";
            space=space+1;
        }
        int column=1;
        while(column<=2*row-1){
            cout<<"*";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}