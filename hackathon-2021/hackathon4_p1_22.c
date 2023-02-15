#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int nk;
    char name[50],str[100];
    scanf("%d%s",&nk,name);
    getchar();

    FILE *ptr = NULL;

    ptr = fopen(("%s" , name) , "r");

    if(ptr==NULL){
        printf("kuch nahi hai\n");
        exit(0);
    }
    int i=0;

    do{
    fgets(str , sizeof(str) , ptr);
    printf("%s",str);
    i++;
    }while(i<nk);
int ch;


    while((ch = getchar())!= -1){
        if(ch!= '\n') 
            continue;

    fgets(str , sizeof(str) , ptr);
    printf("%s",str);  

    }


    fclose(ptr);

    return 0;
}