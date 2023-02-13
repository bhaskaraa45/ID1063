#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_SIZE 100

    typedef struct students
    {
        char name[100];
        char gender;
        float cgpa;
        int year;
        int rollno;
    }students;

    void sorting(students *s,int n){
        for(int i=0;i<n;i++){
            for (int j = i+1; j < n; j++)
            {
                if ((s[i].year > s[j].year) || ((s[i].year == s[j].year)&&(s[i].rollno > s[j].rollno)))
                {
                    students temp = s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
                
            }
            
        }
    }
    

int main(){
    students s[MAX_SIZE];

    int n;
    printf("Enter total student no. (<=100) : ");
    scanf("%d",&n);

    printf("\nNow enter details of the students  \n");
    for (int i = 0; i < n; i++)
    {
        printf("enter name of student_%d : ",i+1);
        scanf("%s",s[i].name);

        getchar();
        
        printf("enter gender of %s (M/F) : ",s[i].name);
        scanf("%c",&s[i].gender);

        printf("enter %s's CGPA : ",s[i].name);
        scanf("%f",&s[i].cgpa);

        printf("enter %s's Year Of Joining : ",s[i].name);
        scanf("%d",&s[i].year);

        printf("enter %s's Roll NUmber : ",s[i].name);
        scanf("%d",&s[i].rollno);
    }

    sorting(s,n);


    for (int i = 0; i < n; i++)
    {
        printf("%d. Name: %s , Gender: %c , CGPA: %.2f , Year: %d  RollNo :%d\n",i+1,s[i].name,s[i].gender,s[i].cgpa,s[i].year,s[i].rollno);
    }
    
    return 0;
}