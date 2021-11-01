/*
Print the following pattern

Pattern for N = 4
1
23
345
4567

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Sample Input 1 :
3

Sample Output 1 :
1
23
345
------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int row = 1;
    int value = 1;
    while(row <= N){
        int column = 1;
        value = row;
        while(column <= row){
            cout << value;
            column = column + 1;
            value = value + 1;
        }
        cout << endl;
        row = row + 1;  
    }
}
