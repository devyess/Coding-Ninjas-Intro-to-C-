/*Print the following pattern for the given N number of rows.
Pattern for N = 4
*
**
***
****
Note : There are no spaces between the stars (*).

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
*
**
***
****
*****

Sample Input 2:
6

Sample Output 2:
*
**
***
****
*****
******
----------------------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column =1;
        while(column<=row){
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
}