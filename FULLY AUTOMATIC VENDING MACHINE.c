/*
FULLY AUTOMATIC VENDING MACHINE: 

dispenses your cuppa on just press of button. A vending machine can serve
range of products as follows:
Coffee
1.Espresso Coffee
2.Cappuccino Coffee
3.Latte Coffee
Tea
1.Plain Tea
2.Assam Tea
3.Ginger Tea
4.Cardamom Tea
5.Masala Tea
6.Lemon Tea
7.Green Tea
8.Organic Darjeeling Tea
Soups
1.Hot and Sour Soup
2.Veg Corn Soup
3.Tomato Soup
4.Spicy Tomato Soup
Beverages
1.Hot Chocolate Drink
2.Badam Drink
3.Badam-Pista Drink
Write a program to take input for main menu & sub menu and display the name of 
sub menu selected in the following format (enter the first letter to select main menu):

Welcome to CCD
Enjoy your <name of sub menu>
Example 1:
Input
c
1
Output
Welcome to CCD!
Enjoy your Espresso Coffee!
Example 2:
Input
t
9
Output
INVALID OUTPUT!

*/

#include<stdio.h>
int main()
{
   char c[3][20]={"Espresso Coffee","Cappuccino Coffee","Latte Coffee"};
   char t[8][30]={"Plain Tea","Assam Tea","Ginger Tea","Cardamom Tea","Masala Tea","Lemon Tea","Ginger Tea","Organic Darjeeling Tea"};
   char s[4][30]={"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};
   char b[3][20]={"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};
   char ch;
   int val,i;
   scanf("%c",&ch); 
   scanf("%d",&val); 
   if(ch=='c')  
   {
       for(i=0;i<3;i++)    
         {
             if(val==i+1)  
             {
               printf("Welcome to CCD!\nEnjoy your %s!",c[i]);
               break;
             }
        }
        if(i==3) 
          printf("INVALID OPTION!");
        
   }
    else if(ch=='t')
    {
       for(i=0;i<8;i++)  
       {
           if(val==i+1)
             {
                 printf("Welcome to CCD!\nEnjoy your %s!",t[i]);
                 break;
             }
       }
       if(i==8) 
        printf("INVALID OPTION!");
        
    }
    else if(ch=='s')
    {
        for(i=0;i<4;i++)
         {
             if(val==i+1)
             {
                 printf("Welcome to CCD!\nEnjoy your %s!",s[i]);
                 break;
             }
         }
         if(i==4)
           printf("INVALID OPTION!");
    }
    else if(ch=='b')
    {
        for(i=0;i<3;i++)
        {
            if(val==i+1)
            {
                printf("Welcome to CCD!\nEnjoy your %s!",b[i]);
                break;
            }
        }
        if(i==3)
          printf("INVALID OPTION!");
    }
    else 
      printf("INVALID OPTION!");
}
