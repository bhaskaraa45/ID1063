#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

typedef struct List{
    int num;
    struct List * next;
}List;

void printingQueue(List **L){
    static int index = 0;
        if(L[index]==NULL){
            printf("Empty\n");
        }
else{
    int d = L[index]->num;
    printf("%d\n",d);
    index++;
}
}

void createQueue(List **L , int i){
    int nk;
    scanf("%d",&nk);
    getchar();

    L[i]->num = nk;
    L[i]->next = L[i+1];

}


int main(){
    int nk;
    char ch;
    List **ptr = (List **)malloc(sizeof(List)*100);
int i=0;
    while((scanf("%c",&ch))!=-1){
        
        if(ch=='E'){
            ptr[i] = (List *)malloc(sizeof(List));

            createQueue(ptr,i);
            i++;
        }

        if(ch=='D'){
            printingQueue(ptr );
        }

    }

    return 0;
}