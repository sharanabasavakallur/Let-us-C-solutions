// The break Statement
// We often come across situations where we want to jump out of a loop 
// instantly, without waiting to get back to the condition. The keyword 
// break allows us to do this. When break is encountered inside any loop, 
// control automatically passes to the first statement after the loop. A
// break is usually associated with an if.

// The continue Statement
// In some programming situations, we want to take the control to the 
// beginning of the loop, bypassing the statements inside the loop, which 
// have not yet been executed. The keyword continue allows us to do this. 
// When continue is encountered inside any loop, control automatically 
// passes to the beginning of the loop.
// A continue is usually associated with an if

// #include<stdio.h>
// #include<math.h>
/*int main()
{
    char another='y';
    int num;
    for(;another=='y';)
    {
        printf("enter a number:");
        scanf("%d",&num);
        printf("squeare of %d is %d\n",num,num*num);
        printf("do you want to continue:");
        fflush(stdin);
        scanf("%c",&another);
        
    }
    return 0;
}*/

// Perhaps you are wondering what for have we used the function fflush( ). 
// The reason is to get rid of a peculiarity of scanf( ). After supplying a 
// number when we hit the Enter key, scanf( ) assigns the number to 
// variable num and keeps the Enter key unread in the keyboard buffer. So 
// when it’s time to supply Y or N for the question ‘Want to enter another 
// number (y/n)’, scanf( ) will read the Enter key from the buffer thinking 
// that user has entered the Enter key. To avoid this problem, we use the 
// function fflush( ). It is designed to remove or ‘flush out’ any data 
// remaining in the buffer. The argument to fflush( ) must be the buffer 
// which we want to flush out. Here we have used ‘stdin’, which means 
// buffer related with standard input device, i.e., keyboard.
// *********************************************************

// (a) Write a program to print all prime numbers from 1 to 300. (Hint: 
// Use nested loops, break and continue)

/*int main()
{
    printf("prime numbers from 1 to 300 are\n");
    int i;
    for(int num=2;num<=300;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            break;
        }
        if(i==num)
        printf("%d ",num);
    }
    return 0;
}*/

//***********************************************************************


// (b) Write a program to fill the entire screen with a smiling face. The
// smiling face has an ASCII value 1.

/*int main()
{
    for(int i=0;i<21;i++){
        printf("%d\n",i);
        for(int i=0;i<41;i++){
            printf("%d\n",i);
            printf("%c ",1); //ascii value of smile-emoji is 1
        }
        printf("\n");
    }
    return 0;
}
*/

// Local Variable: The variable whose scope lies inside a function or a block in which they are declared. 

// Global Variable: The variable that exists outside of all functions. It is the variable that is visible from all other scopes.

// We can access global variable if there is a local variable with same name in C and C++ through Extern and Scope resolution operator respectively.

// In C:
// 1) We can access a global variable if we have a local variable with same name in C using extern. 

// Global variable x
// int x = 50;
 
// int main()
// {
//     // Local variable x
//     int x = 10;
//     {
//         extern int x;
//         printf("Value of global x is %d\n", x);
//     }
//     printf("Value of local x is %d\n", x);
//     return 0;
// }

//*****************************************************************

// (d) Write a program to generate all combinations of 1, 2 and 3 using for
// loop
/*
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<4;j++)
        {
            
            for(int k=1;k<=3;k++)
            {
                printf("%d%d%d\n",i,j,k);
            }
        }
    }
    return 0;
}
*/

//********************************************************************

// (c) Write a program to print the multiplication table of the number 
// entered by the user. The table should get displayed in the 
// following form:
// 29 * 1 = 29
// 29 * 2 = 58
// …
/*
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}*/

//********************************************************************

// (i) Write a program to generate all Pythogorean Triplets with side 
// length less than or equal to 30

/*int main()
{
    printf("pythogorian triplets are:\n");
    for(int i=1;i<=30;i++){
        for(int j=i+1;j<=30;j++){
            for(int k=j+1;k<=30;k++){
                if(i*i+j*j==k*k)
                printf("%d,%d,%d\n",i,j,k);
            }
        }
    }
    return 0;
}
*/

//********************************************************

// (j) Population of a town today is 100000. The population has increased 
// steadily at the rate of 10 % per year for last 10 years. Write a 
// program to determine the population at the end of each year in the 
// last decade.
/*int main()
{
    int pop;
    float p,r;
    p=100000;
    r=10;
    for(int i=1;i<=10;i++){
        pop=p/pow((1+r/100),i);
        printf("population before %d years was:%d\n",i,pop);
    }
}
*/

//****************************************************************************************

// (l) Write a program to print 24 hours of day with suitable suffixes like 
// AM, PM, Noon and Midnight.

/*int main()
{
    int hour;
    for(hour=0;hour<=23;hour++){
        if(hour==0)
        {
            printf("12 Midnight\n");
            continue;//to avoid next if's during first iteration
        }
        if(hour<12)
        printf("%d AM\n",hour);
        if(hour==12)
        printf("12 Noon\n");
        if(hour>12)
        printf("%d PM\n",hour-12);
    }
    return 0;
}*/

//*******************************************************************************************

// (m) Write a program to produce the following output: 
//         1
//      2     3     
//   4     5     6
//7     8     9     10

/*int main()
{
    int i,j,k,l,sp;
    sp=20;
    for(i=1,k=1;i<5;i++){
        //spaces
        for(l=1;l<=sp;l++)
        printf(" ");

        sp=sp-2;

        //digits
        for(j=1;j<=i;j++,k++)
        printf("%d   ",k);

        printf("\n");
    }
    return 0;
}*/

//************************************************************************
// (n) Write a program to produce the following output: 
// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A

/*int main(){
    int n,i=1;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    int spaces=0;
    while(i<=n){

        //printing letters(first triagle)
        int j=1;
        while(j<=n-i+1){
            printf("%c ",j+'A'-1);
            j=j+1;
        }

        //printing spaces (second triangle)
        
        while(spaces){
            printf("  ");
            spaces--;
        }
        spaces=2*(i-1)+1; //leaving odd spaces

        //third triagle of letters (letters in reverse order)
        int k=n-i+1;
        while(k>=1){
            if(k+'A'-1=='G'){
            k=k-1;
            continue;
            }
            printf("%c ",k+'A'-1);
            k=k-1;
        }
        

        printf("\n");
        i=i+1;
    }
    return 0;
}*/


//******************************************************************************
// (o) Write a program to produce the following output:
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

//???

//sieve of erotosthenes

/*#include<stdio.h>

void prime(int n)
{
    int primes[30]={0};
    for(int i=2;i*i<=n;i++){
        if(primes[i]==0){
            for(int j=2*i;j<n;j=j+i){
                primes[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(primes[i]==0)
        printf("%d ",i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("enter the max. limit:");
    scanf("%d",&n);
    prime(n);
}
*/



