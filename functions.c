/*A positive integer is entered through the keyboard. Write a function 
to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime 
factors of 35 are 5 and 7.
*/
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a positive integer:");
    scanf("%d",&n);
    printf("prime factors of %d are:\n",n);
    int i=2;
    while(n>=1){
        if(n%i==0){
            printf("%d  ",i);
        }
        else{
            i++;
            continue;
        }
        n=n/i;
    }
    return 0;
}
*/
//*************************************************************************************************

/*(c) Write a C function to evaluate the series
sin(x)= x - x^3/3! + x^5/5! - x^7/7! ...
upto 10 terms */
/*
#include<stdio.h>
double sine_(float);
float power_(float,int);
long long facto_(int);
int main()
{
    float x;
    printf("enter the value of x:");
    scanf("%f",&x);

    double ans=sine_(x);
    printf("%lf is answer\n",ans);
}
double sine_(float x)
{
    double n,sum=0;
    for(int i=1,j=1;i<=5;i++,j+=2){
        //i for no.of terms and for changing the sign for alternate fractions
        n=power_(x,j)/facto_(j);
        printf(" for i=%d   n=%lf\n",i,n);
        //changing signs
        (i%2==0)?sum=sum-n:(sum=sum+n);
        printf("for i=%d   sum=%lf\n",i,sum);
    }
    return sum;
}
float power_(float a,int b)
{
    float p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("%f power %d is : %f\n",a,b,p);
    return p;
}
long long facto_(int a)
{
    long long fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("factorial of %d is %d\n",a,fact);
    return fact;
}
*/

//********************************************************************************************************
/*Write a function to compute the distance between two points and 
use it to develop another function that will compute the area of the 
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use 
these functions to develop a function which returns a value 1 if the 
point (x, y) lines inside the triangle ABC, otherwise returns a value 
0.*/

/*#include<stdio.h>

float area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    float a=((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2.0);
    
    return (a>0)?a:(a*-1);
}

int isInside(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y)
{
    //calculate area of trinagle ABC
    float A=area(x1,y1,x2,y2,x3,y3);
   
    //calculate area of trinagle PAB
    float A1=area(x1,y1,x2,y2,x,y);
   
    //calculate area of trinagle PAC
    float A2=area(x1,y1,x,y,x3,y3);
   
    //calculate area of trinagle PBC
    float A3=area(x,y,x2,y2,x3,y3);
   
    //check if A and sum of A1,A2 and A3 is equal
    if(A==(A1+A2+A3))
    return 1;
    else 
    return 0;
}

int main()
{
    int x1,y1,x2,y2,x3,y3,x,y;
    printf("enter the co-ordinates of point A:");
    scanf("%d%d",&x1,&y1);
    printf("enter the co-ordinates of point B:");
    scanf("%d%d",&x2,&y2);
    printf("enter the co-ordinates of point C:");
    scanf("%d%d",&x3,&y3);
    printf("enter the co-ordinates of point P:");
    scanf("%d%d",&x,&y);

    if(isInside(x1,y1,x2,y2,x3,y3,x,y))
    printf("\nYes..the point p is insede the triangle\n");
    else
    printf("\nNo..the point is not inside the triangle\n");
}*/



//**********************************  RECURSION  *************************************//
/*
(a) A 5-digit positive integer is entered through the keyboard, write a 
recursive and a non-recursive function to calculate sum of digits of 
the 5-digit number.
*/
/*#include<stdio.h>
int sum(int);
int rsum(int);
int main()
{
    int n;
    printf("enter a five digit number:");
    scanf("%d",&n);
    int choice;
    printf("enter\n1 for recursive method and \n2 for non-recursive method\n");
    scanf("%d",&choice);

    int ans;
    if(choice==1)
    ans=rsum(n);
    else
    ans=sum(n);

    printf("sum of digits of %d is %d\n",n,ans);
}

int sum(int n)
{
    int digit,sum=0;
    while(n!=0)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum+ digit;
    }
    return sum;
}

int rsum(int n)
{
    int digit;

    if(n!=0)//base case
    {
        digit=n % 10;

        return(digit+rsum(n/10)); //recursive condition
    }

}*/

//***************************************************************************
/*
(b) A positive integer is entered through the keyboard, write a program 
to obtain the prime factors of the number. Modify the function 
suitably to obtain the prime factors recursively
*/
/*#include<stdio.h>
void primeFactors(int);
int main()
{
    int n;
    printf("enter a positive integer:");
    scanf("%d",&n);

    primeFactors(n);
}

void primeFactors(int n)
{
    static int i=2;

    if(i<=n)//base case
    {
        if(n%i==0)
        {
            printf("%d  ",i);
            n=n/i;
        }
        else
        i++;

        primeFactors(n);//recursive condition
    }
}
*/
//*************************************************************************
/*
(c) Write a recursive function to obtain the first 25 numbers of a 
Fibonacci sequence. In a Fibonacci sequence the sum of two 
successive terms gives the third term. Following are the first few 
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89...
*/
/*#include<stdio.h>
void genFib(int n,int old,int current);
int main()
{
    int n=23;//becoz first 2 are printed here in main()
    int old=0,current=1;
    printf("%d  %d  ",old,current);
    genFib(n,old,current);
}

void genFib(int n,int old,int current)
{
    //base case
    if(n==0)
    return;

    //wkt in fib series new number will be sum of old and current numbers
    int new=old+current;
    printf("%d  ",new);

    //now current becomes old and new becomes current to print next number
    //recursive condition
    genFib(n-1,current,new);
}*/

//*******************************************************************************************
/*
(d) A positive integer is entered through the keyboard, write a function 
to find the binary equivalent of this number :
(1) Without using recursion
(2) Using recursion
*/
#include<stdio.h>
int binary(int);
int main()
{
    int n;
    printf("enter a positive integer:");
    scanf("%d",&n);

    binary(n);
}

int binary(int n)
{
    int rem=0;

    rem=n%2;
    n=n/2;
    
    //base case
    if(n==0){
        printf("\nthe binary equivalent is %d",rem);
        return(rem);//to print
    }
    else
    binary(n); //recursive condition

    printf("%d",rem);
}













