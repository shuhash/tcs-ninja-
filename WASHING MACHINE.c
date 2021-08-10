/*
WASHING MACHINE: 
A Washing Machine works on the principle of a Fuzzy system,
the weight of clothes put inside it for wash is uncertain. But based on weight
measured by sensors, it decides time and water levels which can be changed by menus
given on the machine control area. For low Water level, time estimate is 25 minutes,
where approximate weight is 2000 grams or any non-zero positive number below that.
For Medium Water level, time estimated is 35minutes, where approximate weight is
between 2001 grams and 4000 grams. For High Water level, time estimated is 45 Minutes, 
where approximate weight is above 4000 grams. Assume the Capacity of the Machine is
maximum 7000 grams. Where the approximate weight is zero, the time estimate is 0
minutes. Write a function which takes numeric weight in the range [0,7000] as input
and produces estimated time as output; if input is more than 7000, 
then output is: "OVERLOADED!", and for all other inputs,
the output statement is "INVALID INPUT”. 
Input should be in the form of integer value –
<integer>
Output must have the following format - TimeEstimated: Minutes 
Example 1 
Input Value 
2000 
Output Value
 Time Estimated: 25 Minutes
 
Given: 
<0 --> Invalid ip 
0 --> 0 min
1 to 2000 --> 25 min 
2001 to 4000 --> 35 min 
4001 to 7000 --> 45 mins 
>7000 --> overloaded  

*/

sol:

#include<stdio.h>
int main()
{
    int weight;
    scanf("%d",&weight);
    if(weight<0)
       printf("INDALID INPUT"); 
    else if(weight==0)
      printf("Time Estimated: 0 minutes");
    else if(weight>=1 && weight<=2000)
      printf("Time Estimated: 25 minutes");
    else if(weight>=2001 && weight<=4000)
      printf("Time Estimated: 35 minutes");
    else if(weight>=4001 && weight<=7000)
     printf("Time Estimated: 45 minutes");
    else 
      printf("OVERLOADED!");
}
