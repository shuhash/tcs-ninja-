/*
32-->   


1+1+1+1+......+1   

10+10+10+1+1 --> 

11+11+10   


500--> 

100+100+100+100+100  --> 

245  --> 

111+111+11+11+1




508 --> 101

407 -->  101

306 --> 101 

205 -->   101

104 --> 101 

3  -->1 

2 --> 1 

1 --> 1 

Left side formation
1*1+0=1 
2*10+1=21
3*100+21=321 
4*1000+321=4321 
5*10000+4321=54321 

dig*b+ans=ans;
*/

#include<stdio.h> 
int main()
{
    int n,temp,dig,ans,b;
    scanf("%d",&n);  
    while(n)
    {
       temp=n,ans=0,b=1;
    while(temp)  
    {  
       dig=temp%10;  
       if(dig)
       {
          ans=ans+1*b;  
       }
       b=b*10;    
       temp=temp/10; 
    }
    printf("%d ",ans);
    n=n-ans;  
    }
    
}






































