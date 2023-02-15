#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

/*
 * please don't use any array at all. 
 */
typedef struct List{
    int val;
    struct List * next;
}List;


void linkedListTraversal(List *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->val);
        ptr = ptr->next;
    }
}


List * insert(List *head, int val){
    List * ptr = (List *) malloc(sizeof(List));
    ptr->val = val;
    List * p = head;


    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}



List * reverseList(List *head)
{
    List *previous, *current;

        previous = head;
        current = head->next;
        head = head->next;
        previous->next = NULL;

        while(head != NULL){
            head = head->next;
            current->next = previous;

            previous = current;
            current = head;
        }
        head = previous; 
    
    return head;
}


int is_prime(int num){
if(num==1)
    return 0;

    for(int i=2 ; i<= num/2 ; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

//smallest prime number between two number
int primeBetweenTwoNumber(int x,int y){
    if(x>y){
        int temp =x;
        x = y;
        y = temp;
    }

    for(int i= x+1 ; i<y ; i++){
        if(is_prime(i)==1){
            return i;
        }

    }

    return 1;
}


int gcd(int a, int b) {
  while(a!=0){
    int temp =a;
    a = b%a;
    b=temp;
  }

  return b;
}

List * insertPrimeNumBetweenEveryElement(List *head, List *ptr){
    List * ptr_2 = (List *) malloc(sizeof(List));
    List * ptr_3 = (List *) malloc(sizeof(List));
    int x,y,prime;

        x = ptr->val;
        ptr_2 = ptr->next;
        y = ptr_2->val;

        prime = primeBetweenTwoNumber(x,y);

        ptr_3->val = prime;
        ptr_3->next = ptr->next;
        ptr->next = ptr_3;

    return head;

}

List * insertGCDNumBetweenEveryElement(List *head , List * ptr){
    List * ptr_2 = (List *) malloc(sizeof(List));
    List * ptr_3 = (List *) malloc(sizeof(List));
    int x,y,g;

        x = ptr->val;
        ptr_2 = ptr->next;
        y = ptr_2->val;

        g = gcd(x,y);

        ptr_3->val = g;
        ptr_3->next = ptr->next;
        ptr->next = ptr_3;

    return head;
}




int main()
{
    int i;
    int var;
    int size;

    while(scanf("%d",&size)!=-1) {

        List *ptr = (List *)malloc(sizeof(List));
        if(size<=0)
            printf("No elements in the linked list\n");
        else{

        scanf("%d",&var);
        ptr->val = var;
        ptr->next = NULL;
        
        for (i=1;i<size;i++) { 
            scanf("%d",&var);
            insert(ptr,var);
        }
        List *nk;

        List *head = ptr;    

        List *newHead = reverseList(ptr);

        linkedListTraversal(newHead);
        printf("\n");

        List *pt = newHead;
        
        while(pt->next!=NULL){
            nk =  insertPrimeNumBetweenEveryElement(newHead, pt);
            pt = pt->next;
            pt = pt->next;
        }
        linkedListTraversal(nk);
        printf("\n");
        pt = nk;
        List *final;

        while(pt->next!=NULL){
            final =  insertGCDNumBetweenEveryElement(newHead, pt);
            pt = pt->next;
            pt = pt->next;
        }
        linkedListTraversal(final);
        printf("\n");

        }
    } 

return 0;
}

