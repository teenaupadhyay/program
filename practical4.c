//program to print sum of numbers from 1 to n
#include<stdio.h>
int main(){
    int n,a,sum=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        sum=sum+a;
    }
    printf("THE SUM OF THE NUMBERS IS = %d",sum);
}
//PRIME NUMBER
#include<stdio.h>
int main(){
int n,b;
scanf("%d",&n);
for(int a=2;a<=n/2;a++){
    b=n%a;
    if(b==0){
        printf("NO. is  not prime ");
        break;
    }
}
if(b!=0){
    printf("NO. is prime");

}




}
//HCF
#include<stdio.h>
int main(){
    int a,b,HCF,small;
    scanf("%d%d",&a,&b);
    if(a<b){
        small=a;
    }
    else{
        small=b;
    }
    for( int i=small;i>=1;i--){
        if(a%i==0 && b%i==0){
            HCF=i;
            break;
        }
    }
    printf("HCF=%d",HCF);
    return 0;
}
//LCM
#include<stdio.h>
int main(){
    int a,b,LCM,max;
    scanf("%d%d",&a,&b);
    if(a<b){
        max=a;
    }
    else{
        max=b;
    }
    for( int i=max;;i++){
        if(a%i==0 && b%i==0){
            LCM=i;
            break;
        }
    }
    printf("LCM=%d",LCM);
    return 0;
}
//PROGRAM TO PRINT ALPHABETS FROM A TO Z
#include<stdio.h>
int main(){

for(int i=0;i<=25;i++){
    printf("%c",i+65);
    printf(" \n ");
}



}
//PROGRAM TO PRINT ALL EVEN NUMBERS FROM 1 TO N
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        if(a%2==0){
            sum=sum+a;
        }
    }
    printf(" the sum of all even numbers from 1 to n is = %d",sum);
}
//program to print first and last digit of a number 
#include<stdio.h>
#include<math.h>
int main(){
     long int n,digit;
    scanf("%ld",&n);
    
    digit = log10(n);
    printf("The last digit of the number is = %ld\n",n%10);
    //while(n>10)
    //n=n/10;
    printf("The first digit of the number is = %ld",n/(int)pow(10,digit));
    return 0;}
    //PROGRAM TO PRINT THE SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int n,a,sum=0,b;
    
    scanf("%d",&n);
    a=n;
    while (1){
     b=a%10;
     sum = sum+b;
     a=a/10;
     if(a==0)
     break;
}
  printf(" %d",sum);

}
//PROGRAM TO PRINT THE SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int n,a,sum=0,b;
    
    scanf("%d",&n);
    a=n;
    while (1){
     b=a%10;
     sum = sum+b;
     a=a/10;
     if(a==0)
     break;
}
  printf(" %d",sum);

}
//program to swap the number
#include<stdio.h>
int main(){
    int n,a,b=0,c,d,sum;
    scanf("%d",&n);
    a=n;
    while(1){
        d=a%10;
        sum=b*10+d;
        b=sum;
        a=a/10;
        if(a==0)
        break; }
    printf("The number after swapping is = %d",sum);



    }
    //find the power of a number using loop
#include<stdio.h>
int main(){
     int n,pow,pownum;
     printf("enter number =");
     scanf("%d",&n);
      printf("Enter pow = ");
     scanf("%d",&pow);
     for(int i=1;i<=pow;i++){
          pownum=n*n;
}
 printf("%d",pownum);
 }
 //program to print all ascii characters
#include <stdio.h>
int main()
{
	int k;// variable declaration   
for(int k=0;k<=255;k++)// for loop from 0-255  
	
    
    {
	printf("\nThe ascii value of%cis%d",k,k);
	}
	return 0;
	}
    //progrm to check if the no. is even or odd
#include<stdio.h>
int main(){
    while(1){
        int n;
        printf("Enter number = ");
        scanf("%d",&n);
        if(n%2==0){
            printf("EVEN\n");}
        else{
            printf("ODD\n");
        }
        }
    }
    #include<stdio.h>
#include<math.h>
int main(){
    int n,a,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        switch(a){
            case 1:
            count1=count1 + 1;  break;
             case 2:
            count2=count2 + 1;  break;
             case  3:
            count3=count3 + 1;  break;
             case 4:
            count4=count4 + 1;  break;
             case 5:
            count5=count5 + 1;  break;
             case 6:
            count6=count6 + 1;  break;
             case 7:
            count7=count7 + 1;  break;
             case 8:
            count8=count8 + 1;  break;
             case 9:
            count9=count9 + 1;  break;
             case 0:
            count0=count0 + 1;  break;
        }
        n=n/10;
    }
    printf("The frequency of 1 is = %d",count1);
    printf("The frequency of 2 is = %d",count2);
    printf("The frequency of 3 is = %d",count3);
    printf("The frequency of 4 is = %d",count4);
    printf("The frequency of 5 is = %d",count5);
    printf("The frequency of 6 is = %d",count6);
    printf("The frequency of 7 is = %d",count7);
    printf("The frequency of 8 is = %d",count8);
    printf("The frequency of 9 is = %d",count9);
    printf("The frequency of 0 is = %d",count0);
}
//program to count no. of even numbers from 1 to N
#include<stdio.h>
int main(){
    int a,n,count=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        if(a%2==0){
            count=count+1;
        }
    }
    printf("%d",count);
}
//program to get a factorial of a number
#include<stdio.h>
 int main(){
     long int n,a=1;
    printf("Enter number = ");
    scanf("%ld",&n);
    while(n!=0){
        a=a*n;
        printf("%ld * ",n);
           n=n-1;
     
    }
    printf(" = %ld",a);
}
//FIBONACCI SERIES
#include<stdio.h>
int main(){
    int a=0,b=1,c,n,sum;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(c=1;c<n-2;c++ ){
        sum=a+b;
        printf(" %d ",sum);
        a=b;
        b=sum;





    }

return 0;
}
//STRONG NUMBER ex-143=1! + 4! +3!
#include<stdio.h>
int main(){
    int n,a,b,c=1,sum=0;
    printf("Enter n = ");
    scanf("%d",&n);
    a=n;
    while(a){
         b=a%10;
           while(b!=0){
        c=c*b;
           b=b-1;
     }
     sum=sum+c;
     a=a/10;}
     
    if(n==sum){
        printf("THE NUMBER IS STRONG!!");

    }
    else{
        printf("THE NUMBER IS NOT STRONG!!");
    }
}

//ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b,c,d,sum=0,count;
    scanf("%d",&n);
    count=log10(n)+1;
    a=n;
    while(a){
        b=a%10;
        c=pow(b,count);
        sum=sum+c;
        a=a/10;
        }
    if (n==sum){
        printf("Armstrong Number.");}
    else{
        printf("Not Armstrong.");
    }
    }
    //PERFECT NO. ex- 6 its factors are 1,2,3 and  their sum is also equal to 6
#include<stdio.h>
int main(){
    int n,sum=0,N;
    scanf("%d",&n);
    //N=n;
    //for(int i=1;i<=N;i++ ){
    for(int a=1;a<=(n/2);a++){
        if(n%a==0){
            sum=sum+a;
        }
    }
   if(n==sum){
    printf("perfect number ");
   }
}