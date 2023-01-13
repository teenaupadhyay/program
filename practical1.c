//PROGRAM TO READ AND PRINT ELEMENTS OF AN ARRAY
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
       printf("THE INPUT ELEMENTS OF THE ARRAY ARE -\n");
     
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
//PROGRAM TO LEFT ROTATE AN ARRAY
#include<stdio.h>
int main(){
    int n;         //n is the size of array
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("THE REVERSED ARRAY IS = \n");
    for(int j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}
//PROGRAM TO INSERT AN ELEMENT IN AN ARRAY
#include<stdio.h>
int main()
{
    int n,ele,pos,temp;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
     }
    printf("Entered the element that you want to insert");
    scanf("%d",&ele);
    printf("Entered the position at which you want to insert the elements");
    scanf("%d",&pos);
    for(int j=n;j>=pos;j--)
    {
        if(j==pos)
        {
            a[j]=ele;
            break;
        }
         a[j]=a[j-1];
       
    }

    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
     }
    


}
//PROGRAM TO DELETE ELEMENT OF ARRAY FROM SPECIFIED POSITION
#include<stdio.h>
int main()
{
    int n,ele,pos,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
     }
    printf("Entered the element that you want to delete");
    scanf("%d",&ele);
    printf("Entered the position of the element which you want to delete the elements");
    scanf("%d",&pos);
    for(int j=pos;j<n-1;j++)
    {
        a[j]=a[j+1];
    }
    for(int k=0;k<n-1;k++)
    {
        printf("%d ",a[k]);
    }
return 0;

}
//PROGRAM TO ADD TWO MATRICES
#include<stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int b[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&b[i][j]);
        }
        printf("\n");
    }
    int c[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",c[i][j]);
            
        }
        printf("\n");
    }
    
}
//PROGRAM TO SUBTRACT TWO MATRICES
#include<stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the another matrix ");
    int b[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("The matrix after subtraction is \n ");
    int c[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d",c[i][j]);
            
        }
        printf(" \n");
    }
    
}
//PROGRAM TO FIND THE SUM AND COUNT ALL NEGATIVE ELEMNTS IN ARRAY
#include<stdio.h>
int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]<0)
        {
            sum=sum+a[i];
            count=count+1;
        }

    }
    printf("THE SUM OF ALL NEGATIVE NUMBERS IN THE ARRAY IS = %d\n",sum);
    printf("THE count OF ALL NEGATIVE NUMBERS IN THE ARRAY IS = %d",count);
   return 0;
}
//PROGRAM TO PERFORM SCALAR MULTIPLICATION OF MATRIX
#include<stdio.h>
int main(){
    int row,column,num;
    printf("Enter no. of row and column");
    scanf("%d %d",&row,&column);
    int a[row][column];
    printf("Enter matrix");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("ENTER THE NUMBER BY WHICH YOU WANT TO MULTPILY THE MATRIX");
    scanf("%d",&num);
    printf("THE MATRIX AFTER SCALAR MULTIPLICATION IS ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",num*a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//PROGRAM TO MULTIPLY TWO MATRICES
#include<stdio.h>
int main(){
    
    
    int row1,column1;
    printf("Enter row and column of first matrix");
    scanf("%d %d",&row1,&column1);
    int a[row1][column1];
    printf("Enter first matrix");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int row2,column2;
    printf("Enter the row and column of second matrix");
    scanf("%d %d",&row2,&column2);
    int b[row2][column2];
    printf("Enter second matrix ");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<column2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    } 
    if(column1==row2)
    {
        int c[row1][column2];
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<column2;j++)
            {
                int d=0;
                for(int k=0;k<column2;k++)
                {
                     d=a[i][i]*b[i][k]+d;
               
                }
                c[i][j]=d;
            }
        }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
            printf("%d ",&c[i][j]);
        }
        printf("\n");
    }
    
    }
    else{
        printf("SORRY!!THE MULTIPLICATION CAN NOT BE PERFORMED:)");
    }
    return 0;
}
//PROGRAM TO CHECK WHETHER THE TWO MATRICES ARE EQUAL OR NOT
#include<stdio.h>
 int main(){
    int row1,column1;
    printf("Enter row and column of first matrix");
    scanf("%d %d",&row1,&column1);
    int a[row1][column1];
    printf("Enter first matrix");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int row2,column2;
    printf("Enter the row and column of second matrix");
    scanf("%d %d",&row2,&column2);
    int b[row2][column2];
    printf("Enter second matrix ");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<column2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    int c;
    if((row1==row2)&&(column1==column2)) // matrices are equal when row and columns are same
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<column2;j++)
            {
                if(a[i][j]==b[i][j])
                {
                    c==1;
                    goto check;
                }
                
            }
        }
    }
    check:
    if(c==0)
    {
        printf("MATRICES ARE EQUAL");
    }
    else{
        printf("MATRICES ARE EQUAL");
    }
}
//PROGRAM TO FIND SUM OF MAIN DIAGONAL ELEMENTS OF THE MATRIX
#include<stdio.h>
int main()
{
    int row,column,sum=0;
    scanf("%d %d",&row,&column);
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        sum=sum+a[i][i];
    }
    printf("the sum of the main diagonal elements of the matrix is = %d",sum);
    return 0;
}
//PROGRAM TO FIND SUM OF MINOR DIAGONAL ELEMTS OF THE MARIX
#include<stdio.h>
int main()
{    int n,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("the sum of the minor diagonal elements of the matrix is = %d",sum);
    return 0;
    
}
//PROGRAM TO FIND SUM OF EACH ROW AND COLUMN OF  MATRIX
#include<stdio.h>
int main()
{   printf("enter no. of  row and column of the marix");
    int row,column;
    scanf("%d %d",&row,&column);
    printf("enter the matrix");
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter the no. of row for which you want the sum of elements");
    int r,sumrow=0;
    scanf("%d",&r);

        for(int j=0;j<column;j++)
        {
            sumrow=sumrow+a[r][j];

        }
    printf("the sum of the entered row elemnts is = %d\n",sumrow);
    printf("enter the no. of column for which you want the sum of elements");
    int c,sumcolumn=0;
    scanf("%d",&c);

        for(int j=0;j<row;j++)
        {
            sumcolumn=sumcolumn+a[j][c];

        }
    printf("the sum of the entered row elemnts is = %d",sumcolumn);
    return 0;
}
//PROGRAM TO FIND SUM OF MINOR DIAGONAL ELEMTS OF THE MARIX
#include<stdio.h>
int main()
{    int n,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("the sum of the minor diagonal elements of the matrix is = %d",sum);
    return 0;
    
}
//PROGRAM TO FIND SUM OF EACH ROW AND COLUMN OF  MATRIX
#include<stdio.h>
int main()
{   printf("enter no. of  row and column of the marix");
    int row,column;
    scanf("%d %d",&row,&column);
    printf("enter the matrix");
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter the no. of row for which you want the sum of elements");
    int r,sumrow=0;
    scanf("%d",&r);

        for(int j=0;j<column;j++)
        {
            sumrow=sumrow+a[r][j];

        }
    printf("the sum of the entered row elemnts is = %d\n",sumrow);
    printf("enter the no. of column for which you want the sum of elements");
    int c,sumcolumn=0;
    scanf("%d",&c);

        for(int j=0;j<row;j++)
        {
            sumcolumn=sumcolumn+a[j][c];

        }
    printf("the sum of the entered row elemnts is = %d",sumcolumn);
    return 0;
}
