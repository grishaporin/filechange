#include <stdio.h>  
void main()    
{    
float n,r,sum=0,temp;    
prfloatf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
prfloatf("palindrome number ");    
else    
prfloatf("not palindrome");   
return 0;
}