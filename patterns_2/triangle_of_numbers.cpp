/*
Code : Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4
...1
..232
.34543
4567654
The dots represent spaces.

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines
Constraints :

0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
           1
         232
       34543
     4567654
   567898765

Sample Input 2:
4

Sample Output 2:
           1
         232
       34543
     4567654
-----------------------------------------------------------------------
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space =1;
        while(space<=n-row){
            cout<<" ";
            space++;
        }
        int column=1;
        int value=row;
        while(column<=row){
            cout<<value;
            value++;
            column++;
        }
        column=1;
        value=2*(row-1);
        while(column<=row-1){
            cout<<value;
            value--;
            column++;
        }
        cout<<endl;
        row++;
    }
}