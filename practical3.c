//program to print hello world
#include<stdio.h>
int main()
{
    printf("Hello world");
    return 0;
}
//program to calculate area of square
#include<stdio.h>
int main()
{
    int side;
    printf("enter the side of square=");
    scanf("%d",&side);
    printf("the area of square is %d",side*side);
    return 0;
}
//program to find the area of triangle using heron's formula
#include<stdio.h>
#include<math.h>
 int main()
 {
    int s,a,b,c ;
    printf("Enter the side a");
    scanf("%d",&a);
    printf("Enter the side b");
    scanf("%d",&b);
    printf("Enter the side c");
    scanf("%d",&c);
    s=(a+b+c)/2;
    float d;
    d=s*(s-a)*(s-b)*(s-c);

    printf("The area of triangle is =%f",sqrt(d));
    return 0;
 }
 //program to find the area of trapezium
#include<stdio.h>
#include<math.h>
int main()
    {
        float p1,p2,ht;//p1,p2=parallel sides,ht=height
        printf("Enter the parallel side");
        scanf("%f",&p1);
        printf("Enter another parallel side");
        scanf("%f",&p2);
        printf("Enter the height");
        scanf("%f",&ht);
        printf("The area of trapezium is = %f",(1.0/2)*(p1+p2)*ht);
        return 0;

    }
    //program to find volume of sphere
#include<stdio.h>
#include<math.h>
int main()
{
    float r,area;
    printf("enter the radius of sphere");
    scanf("%f",&r);
    area=(4.0/3)*3.14*r*r*r;         
    printf("the volume of sphere is %f",area);
    return 0;


}
//program to find the sum of two numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2;
    printf(" enter n1=");
    scanf("%d",&n1);
     printf(" enter n2=");
    scanf("%d",&n2);
    printf("the sum of two numbers is = %d",n1+n2);
    return 0;
    
}
/program to perform all arithematics operations on two entered numbers
#include<stdio.h>
#include<math.h>
int main()
{
    float n1,n2;
    printf("Enter  first number = ");
    scanf("%f",&n1);
    printf("Enter second number = ");
    scanf("%f",&n2);
    printf("The arithematic sum of two numbers is = %f \n",n1+n2); //sum=n1+n2
 printf("The arithematic product of two numbers is = %f \n",n1*n2); //product=n1*n2
 printf("The arithematic subtraction of two numbers is = %f \n",n1-n2); //subtraction=n1-n2
 printf("The arithematic division of two numbers is = %f \n",n1/n2); //division=n1/n2
 printf("The arithematic remainder of two numbers is = %d",(int)n1%(int)n2); //remainder=n1%n2
 return 0;



}
//program to calculate perimeter of rectangle
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("The perimeter of rectangle is= %d",2*(a+b));
    return 0;
    

}
//program to calculate the area of rectangle
#include<stdio.h>
#include<math.h>
int main()
{
    float l,b; //l=length,b=breadth
    printf("Enter the length of rectangle = ");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle = ");
    scanf("%f",&b);
    printf("The area of rectangle is = %f ",l*b); // area=length*breadth
    return 0;
    
}
//program to find the diameter ,circumference and area of circle from the entered radius
#include<stdio.h>
#include<math.h>
int main()
{
    float r;  //r=radius
    printf("enter the radius of circle = ");
    scanf("%f",&r);
    printf("the diameter of the circle is = %f \n",2*r); //diameter=2*r
    printf("the circumference of the cirle is = %f \n",2*3.14*r); //circumference=2*3.14*r
    printf("the area of the circle is = %f",3.14*r*r); //area=3.14*r*r
    return 1;
}
//program to print integer entered by the user
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any integer=");
    scanf("%d",&a);
    printf("The no. you entered is %d",a);
    return 0;
}
//program to convert entered length(centimeteres) into meters and kilometers
#include<stdio.h>
#include<math.h>
int main()
{
    float l;
    printf("Enter the length (centimetres) = ");
    scanf("%f",&l);
    printf("The length in metres is = %fm \n",l/100);  //1 meter = 100 centimeter
    printf("The length in kilometres is = %fkm \n",l/100000);  //1 kilometer = 100000 centimeter
    return 0;
} 
//program to convert temperature in fahrenheit into celsius
#include<stdio.h>
#include<math.h>
int main()
{
    float F;
    printf("Enter the temperature in fahrenheit = ");
    scanf("%f",&F);
    printf("The tmperature in celsius is = %f ", (F-32)*(5.0/9)); //F=C*(9/5)+32
    return 0;
}
//program to convert temperature in   celsius into fahrenheit
#include<stdio.h>
#include<math.h>
int main()
{
    float C;
    printf("Enter the temperature in celsius = ");
    scanf("%f",&C);
    printf("The tmperature in fahrenheit is = %f ", C*(9.0/5)+32); //F=C*(9/5)+32
    return 0;
}
//program to find power of any  number x^y
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("enter the value of x = ");
    scanf("%f",&x);
    printf("enter the value of y = ");
    scanf("%f",&y);
    printf("the value of x to the power y is %f ",pow(x,y));
    return 0;
    
}
//program to find power of any  number x^y
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("enter the value of x = ");
    scanf("%f",&x);
    printf("enter the value of y = ");
    scanf("%f",&y);
    printf("the value of x to the power y is %f ",pow(x,y));
    return 0;
    
}
//PROGRAM TO ENTER TWO ANGLES OF TRIANGLE AND FIND THIRD ANGLE
#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C;
    printf("Enter the first angle = ");
    scanf("%f",&A);
     printf("Enter the second angle = ");
    scanf("%f",&B);
    printf("The third angle(C) of the triangle is = %f",180-(A+B)); //A+B+C=180
    return 0;   
}
//program to find area of triangle using base and height 
#include<stdio.h>
#include<math.h>
int main()
{
    float b,h; //b= base, h=height
    printf("Enter the base = ");
    scanf("%f",&b);
   printf("Enter the height = ");
   scanf("%f",&h);
   printf("The area of triangle is = %f",(1.0/2)*b*h);
   return 0;
    
}
//program to calculate the area of equilateral triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float side;
    printf("enter the side of traiangle is = ");
    scanf("%f",&side);
    printf("The area of traiangle is = %f",(1.732/4)*side*side);
    return 0;
}
//program to calculate total,average and percentage from the marks entered
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total,average,percentage;
    printf("Enter the marks of subject1=");
    scanf("%d",&s1);
     printf("Enter the marks of subject2=");
    scanf("%d",&s2);
 printf("Enter the marks of subject3=");
    scanf("%d",&s3);
 printf("Enter the marks of subject4=");
    scanf("%d",&s4);
     printf("Enter the marks of subject5=");
    scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    printf("Total=%d\n",total);
    average=(s1+s2+s3+s4+s5)/5;
    printf("Average=%d\n",average);
    percentage=(s1+s2+s3+s4+s5)*100/5;
    printf("Percentage=%d",percentage);
    return 0;
}
//program to add two integers
#include<stdio.h>
int main()
{
    int n1 , n2;
    printf("enter the first no. = ");
    scanf("%d",&n1);
    printf("enter the second no. = ");
    scanf("%d",&n2);
    printf("The sum of the two no. is = %d",n1+n2);
    return 0;
}
