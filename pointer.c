//PROGRAM TO ADD TWO NUMBERS USING POINTERS
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the numbers = ");
    scanf("%d %d",&n1,&n2);
    int *p1=&n1,*p2=&n2,sum;
    sum=*p1+*p2;
    printf("%d",sum);
    return 0;
}
//PROGRAM TO SORT AN ARRAY USING POINTERS
#include<stdio.h>
int main()
{   
    int a[5]={6,5,9,8,5},*p;
    for(int i=0;i<5-1;i++)
    {
    for( p=&a[0];p<&a[5];p++)
    {
        if (*p>*(p+1))
        {
            int temp;
            temp=*p;
            *p=*(p+1);
            *(p+1)=temp;
        }
    }
    }
    printf("array in ascending order is =\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<5-1;i++)
    {
    for( p=&a[0];p<&a[5];p++)
    {
        if (*p<*(p+1))
        {
            int temp;
            temp=*p;
            *p=*(p+1);
            *(p+1)=temp;
        }
    }
    printf("\n");
    }
     printf("array in descending order is =\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}  
//PROGRAM TO FIND LENGTH OF STRING USING POINTERS
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],*p,count=0;
    gets(str);
    int i=0;
    for(p=str;str[i];p++,i++)
    {
        count++;
    }
    printf("The length of string is =%d",count);
 return 0;
}
//PROGRAM TO COPY ONE STRING TO ANOTHER USING POINTER
#include<stdio.h>
#include<string.h>
void main()
{
char str[10],*p,*q;
gets(str);

p=str;
printf("The string before copying is = %s",p);

q=p;
printf("The string after copying is = %s",q);
  


}
//  PROGRAM TO COMPARE TWO STRINGS USING POINTERS
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],*p,*q;
    int c=1;
    gets(a);
    gets(b);
    int i=0;
    for(p=a,q=b;a[i];p++,q++,i++)
    {
        if(*p!=*q)
        {   c=0;
            printf("the two strings are not equal:)");
            break;
        }
    }
    if (c==1)
    {
        printf("The two strings are equal");
    }



}
//PROGRAM TO REVERSE A STRING USING POINTER
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],*p,*q,b;
    
    gets(a);
    b=strlen(a);
    p=a;
    q=p;
    for(int i=b;i>=0;i--)
    {
        printf("%c",*(q+i));
    }


}
//PROGRAM TO REVERSE A STRING USING POINTER
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],*p,*q,b;
    
    gets(a);
    b=strlen(a);
    p=a;
    q=p;
    for(int i=b;i>=0;i--)
    {
        printf("%c",*(q+i));
    }


}
/PROGRAM TO SWAP TWO NUMBERS USING POINTERS
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the numbers = ");
    scanf("%d %d",&n1,&n2);
     printf("Numbers before swapping are = %d %d\n",n1,n2);
   
    int *p1=&n1,*p2=&n2,temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("Numbers after swapping are =%d %d  \n",n1,n2);
    
}
//PROGRAM TO REVERSE AN ARRAY USING POINTER
#include<stdio.h>
int main()
{
    int a[5],*p,i;
    for(p=a;p<&a[5];p++)
    {
        scanf("%d",p);
    }
     printf("The  array before reversing  is =\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
   printf("The reversed array is :");
    for(p=&a[4];p>=&a[0];p--)
    {
        printf("%d",*p);
    }
    printf("\n");
    
}
//PROGRAM TO SEARCH AN ELEMENT IN ARRAY USING POINTER
#include<stdio.h>
int main()
{
    int a[5],i,b,flag=0,*p;
    p=a;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search for:");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(*(p+i)==b)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d found at %d",b,i);

    }
    else
    printf("Element not found");
}
/PROGRAM TO ACCESS TWO DIMENSIONAL ARRAY USING POINTER
#include<stdio.h>
int main()
{
    int a[2][3],i,j,*p;
   // for(i=0;i<2;i++)
   // {
   //     for(j=0;j<3;j++)
   //     {
    //        scanf("%d",&a[i][j]);
    //    }
    //}
    for(p=*a;p<=&a[1][2];p++)
    {
        scanf("%d",p);
    }
    
    for(p=*a;p<=&a[1][2];p++)
    {
        printf("%d ",*p);
        if(p==&a[0][2])
        {
            printf("\n");
        }
    }

}