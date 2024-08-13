#include <stdio.h>
void main ()
{
float a,b,c;
prfloatf("Enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
prfloatf("a is the greatest floateger");
else if(b>c)
prfloatf("b is the greatest floateger");
else
prfloatf("c is the greatest floateger");
}