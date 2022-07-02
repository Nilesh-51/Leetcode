

void reverseString(char* s, int sSize){
    int i,j;
    char temp;
    for(i=0,j=sSize-1;i<sSize/2;i++,j--){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}
