/*
Jackson, a math research student , is developing an application on prime numbers. 
For the given two integers on the display of the application, the user has to identify all the prime 
numbers within the given range (including the given values).Afterward , the application will sum
all these prime numbers. Jackson has to write an algorithm to find the sum of all the prime numbers 
of the given range.
Write an algorithm to find the sum of all the prime numbers of the given range.
INPUT:
The input consists of two space-separated integers rangeLeft and rangeRight ,representing the
boundary values of the given range.
OUTPUT:
Print an integer representing the sum of the largest and smallest prime numbers of the given range.
Constraints:
<=rangeLeft<rangeRight<=
Example
I/P:
-30 -11
O/P:
-112
Explanation:
The prime numbers within the given range are -29,-23,-19,-17,-13 and -11. The sum of the prime number
is -112
So the output is -112.
*/
#include<stdio.h> 
int prime(int,int);
int main()
{
    int a,b,x,y,z;
    scanf("%d %d",&a,&b);  //-30 -11
    if(a<0 && b<0)
    {
       a=a*-1;  //a=30
       b=b*-1;  //b=11
       printf("%d",-1*prime(b,a));  //-1*122  --> -122
    }
    else  if(a<0 && b>0)  //-30 10       2--> 30     2->10
    {
        a=a*-1;
        x=prime(2,a);  
        y=prime(2,b);
        z=x*-1+y;
        printf("%d",z);
    }
    else 
    {
       printf("%d",prime(a,b)); 
    }
}
int prime(int a,int b)  //10 20  --> 11 13 17 19
{   
    int i,j,c,sum=0;
    for(i=a;i<=b;i++)  //11 20
    {  
        c=0;
       for(j=1;j<=i;j++)  //1<=11
       {
           if(i%j==0)  //1 11
            c++;  //c=2
       }
       if(c==2)
          sum=sum+i;  
    }
    return sum;
    
}
    












