#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int value=1;
    while(row<=n){
        int space=1;
        while(space<=n-row){
            cout<<" ";
            space=space+1;
        }
        int column=1;
        value=row;
        while(column<=row){
            cout<<value;
            column++;
            value++;
        }
    }
    cout<<endl;
    row++;
}