#include<stdio.h>
int 
main()

{
   
long num, decimal_num, remainder, base=1, binary=0;
 
   printf("Enter a decimal integer\n");
  
   scanf("%ld", &num);
 
   decimal_num=num;
  
   while(num>0)
    
  {
 
    remainder=num%2;
 
    binary=binary+remainder*base;
 
    num=num/2;
  
    base=base*10;
 
    }
   
    printf("input number is %ld\n", decimal_num);
  
    printf("its binary equivalent is %ld\n", binary);
 
   }
