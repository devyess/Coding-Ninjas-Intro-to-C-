void replaceCharacter(char input[], char c1, char c2) {
    int n= strlen(input);
    for(int i=0;i<n;i++){
        if(input[i]==c1)
            input[i]=c2;
    }
}