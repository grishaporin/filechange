#include<stdio.h>
void main()
{
float a,b,c,d,e,f,g;
float res;
prfloatf("ENTER THE VALUES OF a,b,c,d,e,f,g");
scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
res=((a-b/c*d+e)*(f+g));
prfloatf("RESULT=%f",res);
}