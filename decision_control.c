#include<stdio.h>
#include<math.h>
int main(){

// Any year is input through the keyboard. Write a program to 
// determine whether the year is a leap year or not.

/*int n;
printf("enter the year!");
scanf("%d",&n);

if(n%400==0 || n%100!=0 && n%4==0)
printf("Leap Year!");

else
printf("Not Leap Year!");*/

//********************************************************

// According to the Gregorian calendar, it was Monday on the date 
// 01/01/01. If any year is input through the keyboard write a program 
// to find out what is the day on 1st January of this year.

// long int normaldays,lepadays,totaldays,year;
// printf("enter the year!\n");
// scanf("%d",&year);
// year=year-1;//total years till now
// normaldays=year*365L;
// lepadays=(year/4)-(year/100)/*subtracting century years*/+(year/400)/*and then adding century leap years*/;
// //as we know leapyears have a day extra
// totaldays=normaldays+lepadays;
// int thisday=totaldays%7;

// if(thisday==0)
// printf("it's Monday!");
// else if (thisday==1)
// printf("it's Tuesday!");
// else if (thisday==2)
// printf("it's Wednesday!");
// else if (thisday==3)
// printf("it's Thursday!");
// else if (thisday==4)
// printf("it's Friday!");
// else if (thisday==5)
// printf("it's Saturday!");
// else
// printf("it's Sunday!");

//******************************************************

// If the ages of Ram, Shyam and Ajay are input through the keyboard, 
// write a program to determine the youngest of the three.

/*int a,b,c,youngest;
printf("enter the ages of Ram,Shyam and Ajay..\n");
scanf("%d%d%d",&a,&b,&c);

if(a<b)
{
    if(a<c)
    youngest=a;
    else
    youngest=c;
}
else
{
    if(b<c)
    youngest=b;
    else
    youngest=c;
}
printf("youngest age of Ram(%d),Shyam(%d) and Ajay(%d) is %d\n",a,b,c,youngest);
*/

//****************************************************

// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program 
// to check if all the three points fall on one straight line.
/*
int x1,y1,x2,y2,x3,y3,S1,S2,S3;
printf("enter the co-ordinates of first point\n");
scanf("%d%d",&x1,&y1);

printf("enter the co-ordinates of second point\n");
scanf("%d%d",&x2,&y2);

printf("enter the co-ordinates of third point\n");
scanf("%d%d",&x3,&y3);

S1=abs(x2-x1)/abs(y2-y1);
printf("s1=%d\n",S1);
S2=abs(x3-x2)/abs(y3-y2);
S3=abs(x3-x1)/abs(y3-y1);

if(S1==S2 && S2==S3)
printf("Points are colinear");

else
printf("Points are not collinear");
*/

//*******************************************************

// Given the coordinates (x, y) of center of a circle and its radius, write 
// a program that will determine whether a point lies inside the circle,on the circle or outside the circle.

/*int x,y,r;
printf("enter the radius and co-ordiantes of point..\n");
scanf("%d%d%d",&r,&x,&y);
//lets assume center is at origin (0,0)
int d;
//using distance formula
d=sqrt(pow(x,2)+pow(y,2));

if(d==r)
printf("point lies on the circle.");
else{
    if(d>r)
    printf("point lies outside the circle.");
    else
    printf("point lies inside the circle.");
}

}*/

int n;
printf("enter the year:");
scanf("%d",&n);
if(n%400==0){
    printf("leap year..\n");
}
else if(n%4==0 && n%100!=0){
    printf("leap year.\n");
}
else
printf("not a lepa year..\n");
}