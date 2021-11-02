/*
Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5
..*
.***
*****
.***
..*
The dots represent spaces.

Input format :
N (Total no. of rows and can only be odd)

Output format :
Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5

Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
3

Sample Output 2:
  *
 ***
  *
  -----------------------------------------------------------------------------------------------------
  */
  #include <iostream>
  using namespace std;
  int main(){
      int n;
      cin>>n;
      int row=1;
      while(row<=n/2 +1){
          int space =1;
          while(space<=n/2-row+1){
              cout<<" ";
              space++;
          }
          int column=1;
          while(column<=2*row-1){
              cout<<'*';
              column++;
          }
          cout<<endl;
          row++;
      }
      row=1;
      while(row<=n/2){
          int space =1;
          while(space<=row){
              cout<<" ";
              space++;
          }
          int column=1;
          while(column<=n-2*row){
              cout<<"*";
              column++;
          }
          cout<<endl;
          row++;
      }
  }