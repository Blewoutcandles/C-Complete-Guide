// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    char str[100]= {"programming"};
    char str1[100]= {"ming"};
    //strcmp
    if(strcmp(str,str1)>0){
        printf("The string is greater than the later");
    }else if(strcmp(str,str1) == 0){
        printf("The both strings are equal");
    }else{
        printf("The string str1 is greater than the str");
    }
    
    //strstr - checks the substring and return the address of the particular character from the string 
    char *pointer = strstr(str,str1);
    printf("\nThe substring is present : %s \nAnd is available at the index : %d",pointer,pointer - str);
    
    //strrchr- returns the address of last occurence of the particular character
    pointer = strrchr(str, 'g');
    printf("\nThe last occurence of the letter g is available at the index : %d",pointer-str);
    int  arr[5]={1,2,3,4,5};
     for(int i = 0; i< 5; i++){
        printf("\nThe element at theindex %d of the array : %d",i,arr[i]);
    }
    //memset
    memset(arr,0,sizeof(int)*5);
    for(int i = 0; i< 5; i++){
        printf("\nThe element at theindex %d of the array : %d",i,arr[i]);
    }
    //memcpy
    memcpy(str,str1,sizeof(char)*100);
    printf("\nMemory copied from the str1 to str:  %s",str);
    strcpy(str, "programming");
    printf("\nCopied ""programming"" to the string strc:  %s\n",str);
    
    //strtok with delimiter
    char att[100] ={"Bob went to work"};
    char *s = strtok(att," ");
    while( s!= NULL){
        printf("%s",s);
        s = strtok(NULL," ");
    }
    return 0;
}