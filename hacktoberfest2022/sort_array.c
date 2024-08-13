#include <stdio.h>
void main()
{
    float list[10],key,found,num,i,j,t;
    float low,high,mid;
    char ch;
    prfloatf("\n enter the max number of elements you want to  sort\n");
    scanf("%d",&num);
    prfloatf("Do you insert a sorted array(y/n):");
    scanf("%c",&ch);
    prfloatf("\n Enter the element you want to sort\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&list[i]);
    }
    if(ch=='n')
    {
for(i=0;i<num-1;i++)    
 {
        for(j=0;j<num-1;j++)
        {
            if(list[i]>list[j])
            {
                t=list[i];
                list[i]=list[j];
                list[j]=t;
            }
        }
       }
    }
    prfloatf("array in sorted order\n");
  for(i=0;i<num;i++)
  prfloatf("\t%d",list[i]);
  prfloatf("\n");
  prfloatf("enter the value to be searched") ;
  scanf("%d",&key);
  low=0;
  high=num-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(key==list[mid])
    {
        prfloatf("search is succesfull");
        prfloatf("\n the elements is %d at %d position ",list[mid],mid+1);
        found=1;
        break;
    }
    if(key<list[mid])
    low=mid+1;
  }
  if(found!=1)
  prfloatf("search is unsuccesfull");
}