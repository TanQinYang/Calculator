#include <stdio.h>
#include <stdlib.h>
int add(int n,int i)
{int sum;
sum=0;
    sum=sum+i+n;
return sum;
}

int minus(int n,int i)
{int difference;
 difference=0;
    difference=difference+n-i;
return difference;
}

double divide(double n,double i)
{double quotient;
    quotient=n/i;
return quotient;
}

double multiply(double n,double i)
{double product;
    product=n*i;
return product;
}

int square(int n)
{int squaresum;
 squaresum=0;
    squaresum=n*n;
return squaresum;
}

int cube(int n)
{int cubesum;
 cubesum=0;
    cubesum=n*n*n;
return cubesum;
}

int main()
{
int sum,difference,squaresum,cubesum;
double  quotient,product;
int a,b;
printf("Pls enter 2 numbers:");
scanf("%d ",&a);
scanf("%d",&b);
    sum=add(a,b);
   difference=minus(a,b);
    quotient=divide(a,b);
    product=multiply(a,b);
    squaresum=square(a);
    cubesum=cube(a);
printf("The sum of two numbers is:%d\n",sum);
printf("The difference of two numbers is:%d\n",difference);
printf("The quotient of two numbers is:%f\n",quotient);
printf("The product of two numbers is:%f\n",product);
printf("The squaresum of one number is:%d\n",squaresum);
printf("The cubesum of one number is:%d",cubesum);
return 0;
}
