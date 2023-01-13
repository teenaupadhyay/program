//program to find maximum of two numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    a>b?printf("a is greater"):printf("b is greater");
}
#include<stdio.h>
#include<math.h>

//program to find maximum of three numbers
int main(){
    int a,b,c;
    printf("Enter a = \n Enter b = \n Enter c= \n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)&&(a>c)?printf("a is greatest"):(b>a)&&(b>c)?printf("b is greatest"):printf("c is greatest");
 
}
//program to print days of week using switch case
#include<stdio.h>
int main(){
    int a;
    printf("Enter a= ");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("MONDAY");
        break;
        case 2:
        printf("TUESDAY");
        break;
        case 3:
        printf("WEDNESDAY");
        break;
        case 4:
        printf("THURSDAY");
        break;
        case 5:
        printf("FRIDAY");
        break;
        case 6:
        printf("SATURDAY");
        break;
        case 7:
        printf("SUNDAY");
        break;



    }
}
//program to check whter a no. is vowel or consonant using switch case
#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);


    if((n>'a'&&n<'z')||(n>'A'&&n<'Z'))
    {
        switch(n){
            case 'a':
            printf("Vowel");
            break;
                       case 'e':

            printf("Vowel");
            break;
                       case 'i':
            printf("Vowel");
            break;
                       case 'o':
            printf("Vowel");
            break;
                       case 'u':
            printf("Vowel");
            break;
                       case 'A':
            printf("Vowel");
            break;
                       case 'E':
            printf("Vowel");
            break;
                       case 'I':
            printf("Vowel");
            break;
                       case 'O':
            printf("Vowel");
            break;
                       case 'U':
            printf("Vowel");
            break;
            default:
            printf("Not a Vowel");











        }
    }
    
    
    
    
    }
    //program to find maximum between two numbers using switch
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    int c;
    c=a>b;
    switch(c){
        case 1:
        printf(
            "The no. greater is a");
        default:
        printf("The no. greater is b");
    }
}
//program to check whether a no. is even or odd
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    b = a%2==0;
    switch (b){
        case 1:
        printf("Even");
        default:
        printf("Odd");
    }
}
//to check whether a no. is positive ,negative or zero
#include<stdio.h>
int main(){

int n,a;
printf("Enter n = ");
scanf("%d",&n);
a=n>0;
if(n){
    switch(a){
        case 1:
        printf("positive");
        break;
        default:
        printf("Negative");
        

    }}
else
printf("0");

}

