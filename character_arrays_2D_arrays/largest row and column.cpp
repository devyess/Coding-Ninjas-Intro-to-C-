#include<climits>
void findLargest(int **arr, int row, int col)
{
   
    if(row==0 && col==0){
       cout<<"row 0 -2147483648";
        return;
    }
    
    
    	int i,j,sum = 0;
	    int tempr = INT_MIN;
	    int maxrow = 0, maxr = 0;
	// finding each row sum 
	for(i = 0; i < row; i++){ 
		for (j = 0; j < col; j++) { 
			// Add the element 
			sum = sum + arr[i][j]; 
		}
        //finding th greatest row
		if(sum > tempr){
			maxrow = sum;
			maxr = i;
			tempr = maxrow;
		}
		// Reset the sum 
		sum = 0; 
	}
	
	i=0,j=0,sum = 0; 
	int tempc = INT_MIN;
	int maxcol = 0, maxc = 0;
	
	// finding the each column sum 
	for (i = 0; i < col; ++i) { 
		for (j = 0; j < row; ++j) { 

			// Add the element 
			sum = sum + arr[j][i]; 
		}
        // finding th greatest column
		if(sum > tempc){
			maxcol = sum;
			maxc = i;
			tempc = maxcol;
		}
		// Reset the sum 
		sum = 0;
	}
    //comparing the max row or col
	if(maxrow > maxcol){
		cout<<"row " << maxr<<" "<<maxrow;
	}
	else if(maxrow < maxcol){
		cout<<"column " << maxc<<" "<<maxcol;
	}
	else{
		cout<<"row " << maxr<<" "<<maxrow;
	}
}