#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define RAD_TO_DEG_CONST 57.2958
#define MAX_SIZE 2

    typedef struct complex
    {
    float re;
    float img;
    }complex;

void addition(complex *c){
    float arr[2];
    arr[0]=c[0].re+c[1].re;
    arr[1]=c[0].img+c[1].img;
    char ch='+';
    if(arr[1]<0){
    ch='-'; arr[1] *= (-1);
    }

    printf("Sum :\t%.2f %c i %.2f",arr[0],ch,arr[1]);
}    

void substraction(complex *c){
    float arr[2];
    arr[0]=c[0].re-c[1].re;
    arr[1]=c[1].img-c[1].img;
    char ch='+';
    if(arr[1]<0){
    ch='-'; arr[1] *= (-1);
     }
    
    printf("Substraction :\t%.2f %c i %.2f",arr[0],ch,arr[1]);
    
}

void multiplication(complex *c){
    float arr[2];
    arr[0]=c[0].re*c[1].re - c[0].img*c[1].img;
    arr[1]=c[0].img*c[1].re + c[1].img*c[0].re;
    char ch='+';
    if(arr[1]<0){
    ch='-'; arr[1] *= (-1);
    }

    printf("Multiplaction :\t%.2f %c i %.2f",arr[0],ch,arr[1]);
    
}
void division(complex *c){
    float arr[2];
    arr[0]=c[0].re;
    arr[1]=c[0].img;
    float re;
    float img;
    float c2 =1 , d2 = 1;
        re = arr[0]*c[1].re + arr[1]*c[1].img;
        img = arr[1]*c[1].re - arr[0]*c[1].img;
        
        c2 = c[1].re*c[1].re;
        d2 = c[1].img*c[1].img;

        arr[0] = re;
        arr[1] = img;

        char ch ='+';
if (arr[1]<0)
{
    arr[1] *= (-1);
    ch = '-';
}

        printf("Division :\t(%.2f/%.2f)  %c  (%.2f/%.2f) i",arr[0],(c2+d2),ch,arr[1],(c2+d2));    
}

void polar_form(complex c){
    float a=c.re,b=c.img;

    //z = r(cos@ + i sin@) --> @ =theta
    float a2,b2;
    a2 = c.re*c.re;
    b2 = c.img*c.img;
    float r;

    r = sqrt(a2+b2);
    //we know tan@ = b/a.. so, @ = arctan(b/a)

    float theta ;

    theta = atan(b/a) * RAD_TO_DEG_CONST ;

    if (b<0 && a>0)
    {
        theta += 360.0;
    }else if(a<0 && b>0){
        theta += 180.0;
    }else if(a<0 && b<0){
        theta += 180.0;
    }

    printf("\nPolar from :\tz = %.3f(cos(%.2f)) + i sin(%.2f)",r,theta,theta);

}

void magnitude(complex c){
    float a = c.re, b =c.img;

    float mod_z;
    mod_z =sqrt(pow(a,2)+pow(b,2));
    printf("\nmagnitude =\t%.3f",mod_z);
}

int main(){
    
    complex comp[MAX_SIZE];
    char ch,ch2,ch3=' ',ch4='+';
    int n,count=0;
    


    puts("Which operation you want to perform : ");
puts("\n\ta. Addition\n\tb. Subtraction\n\tc. Multiplication\n\td. Division\n\te. Converting the complex number into polar form\n\tf. Calculating the magnitude of the complex number\n");
puts("\nenter a,b,c... accordingly : ");
scanf("%c",&ch);

getchar();
puts("");

if(ch=='a' || ch=='b' || ch=='c' ||ch=='d'){
    n=2;
}
else if(ch=='e' || ch=='f') n=1;
else{
    printf("operation serial number '%c' does not exist\n",ch);
    return 0;
}

for (int i = 0; i < n; i++)
{   
    printf("\nenter real & imaginary partof complex_number_%d -->",i+1);
    scanf("%f%f",&comp[i].re,&comp[i].img);
}

puts("");
switch (ch)
{
case 'a':
    addition(comp);
    break;
case 'b':
    substraction(comp);
    break;
case 'c':
    multiplication(comp);
    break;
case 'd':
    division(comp);
    break;    
case 'e':
    polar_form(comp[0]);
    break;
case 'f':
    magnitude(comp[0]);
    break;     
}

puts("");
    return 0;
}
