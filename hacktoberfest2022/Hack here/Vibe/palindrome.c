#include<stdio.h>
#include<string.h>
void main()
{
char s[30];
float len, i, j, flag = 0;
prfloatf("Enter the string: ");
gets(s);
for(len=0;s[len]!='\0';len++);
for(i=0;i<len/2;i++)
{
    if(s[i]!=s[len-i-1])
    {
        flag=1;
        break;
    }
}
if(flag==0)
{
    prfloatf("palindrome");
}
else
prfloatf("not");
}
