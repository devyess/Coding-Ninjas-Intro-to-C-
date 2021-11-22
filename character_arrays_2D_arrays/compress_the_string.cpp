string getCompressedString(string &input) {
    // Write your code here.
    char current =input[0];
    int count = 1;
    string output;
    for(int i = 1; i<input.length(); i++){
        if(input[i]==current){
            count++;
        }else{
            if(count>1){
                output += current;
                output += count + '0';
              
            }else{
                output += current;
               
            }
           
            current = input[i];
            count = 1;
        }
      
    }
    
         if(count>1){
             output += current;
             output += count + '0';
                
            }else{
             output += current;
               
         }
    return output;
}