/*[C] Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be 
taken and once this action is finished, the menu should reappear. 
Unless the user selects the ‘Exit’ option the program should 
continue to run.
Hint: Make use of an infinite while and a switch statement.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;

    while(1){
    printf("enter your choice(1-4)\n1-factorial\n2-prime or not\n3-odd or even\n4-exit\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:printf("\nenter a number:");
                int n1;
                scanf("%d",&n1);
                int fact=1;
                for(int i=2;i<=n1;i++)
                    fact=fact*i;
                
                printf("\nfactorial of %d is %d\n",n1,fact);
                break;

        case 2:printf("\nenter a number:");
                int n2,flag=0;
                scanf("%d",&n2);
                for(int i=2;i<n2/2;i++){
                    if(n2%i==0)
                        flag=1;
                }

                if(flag==0)
                printf("\nYou entered prime number!");
                else
                printf("\nYou have entered a non-prime number!");
                break;

        case 3:printf("\nenter a number:");
                int num;
                scanf("%d",&num);
                if(num%2==0)
                printf("\nyou have entered a even number!");
                else
                printf("\nyou have entered a odd number!");
                break;

        case 4:printf("OK, thank you!");
                exit(0);

        default:printf("wish you knew what 1-4 means!\n");
    }}
    return 0;
}