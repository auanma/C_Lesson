#include<stdio.h>
#include <string.h>

int main(){

    int quantity,i,len;
    char word[10][50];

    printf("Enter number >>>");
    scanf("%d",&quantity);
    
    if(quantity<=10){
    printf("======Input======\n");
    for(i=1;i<=quantity;i++){
        printf("Enter Text %d : ",i);
        scanf("%s",word[i-1]);
    }
    
    printf("\n======Output======\n");

    for(i=0;i<quantity;i++){
    len = strlen(word[i]);
    printf("%s : %d\n",word[i],len);
    }

    }else{
        printf(" Your input is more than size of array ");
    }

    return 0;
}