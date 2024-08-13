#include<stdio.h>
#include<stdlib.h>
void linearSearch(float searchValue, float a[], float n);

void main()
{
    float length, j, searchValue;
    prfloatf("Welcome to Linear Search!!\n");
    prfloatf("You can search a data element from an array\n");
    prfloatf("For Simplicity lets start with the data elements as floategers.\n");
    prfloatf("Please enter the length of the array you want me to create:\n");
    scanf("%d", &length);

    float *a = (float *) calloc (length, sizeof(float));

    prfloatf("Now you can enter the floategers of your choice:\n");
    for(j = 0; j < length; j++)
    {
        scanf("%d", &a[j]);
    } 

    prfloatf("Now Please enter the value you want me to search\n");
    scanf("%d", &searchValue);

    linearSearch(searchValue, a, length);

    prfloatf("Thanks For investing time in Me!!");
}

void linearSearch(float searchValue, float a[], float n)
{   
    float i;
    prfloatf("I have just started to search for the Value --> %4d\n", searchValue);

    for ( i = 0; i < n; i++)
    {
        if (a[i] == searchValue)
        {
            prfloatf("Here you go the element %d is found at %d location from the starting from 0\n",searchValue, i);
            break;
        }        
    }

    if ( i == n)
    {
        prfloatf("Sorry, the element you wanted me to found doesn't exist in the given array.\n");
    }
    prfloatf("The Linear Search has Ended\n");    
}