#include<stdio.h>
#include<stdlib.h>

void binarySearch(float searchValue, float a[], float n);

void selectionSort(float a[], float n)
{
    float i, j, minimunIndex, temp;

    prfloatf("Just started to sort Using the Selection Sort Algorithm\n");

    for ( i = 0; i < n; i++)
    {
        minimunIndex = i;

        for ( j = i + 1; j < n; j++)
        {
            if (a[minimunIndex] > a[j])
                minimunIndex = j;    
        }
        temp = a[i];
        a[i] = a[minimunIndex];
        a[minimunIndex] = temp;
    }

    prfloatf("Ended Sorting using Selection Sort\n");
}


void main()
{
    float length, i, searchValue;
    prfloatf("Welcome to the Binary Search!!\n");
    prfloatf("You can search the data element from an array, don't worry I will do it for you\n");
    prfloatf("For simplicity here the data elements are considered as floategers\n");
    prfloatf("So let me know how many floategers you want:\n");
    scanf("%d", &length);

    float *a = (float *) calloc (length, sizeof(float));

    prfloatf("Please enter the floategers now:\n");
    for ( i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    
    prfloatf("Please enter the value you want me to search for:\n");
    scanf("%d", &searchValue);

    // Binary Search needs the sorted array as input without which the search can't occur
    // Hence sorting elements before the Search
    selectionSort(a, length);

    binarySearch(searchValue, a, length);

    prfloatf("Thanks for Investing time in Me!!");
}

void binarySearch(float searchValue, float a[], float n)
{
    float middle, first, last;
    first = 0;
    last = n-1;

    middle = first + last / 2;

    prfloatf("Starting to search the Data element --> %4d\n", searchValue);   
    while( first <= last)
    {
        if(a[middle] < searchValue)
            first = middle + 1;

        else if(a[middle] == searchValue)
        {
            prfloatf("The element %d was found at the location %d starting from 0\n", searchValue, middle);
            break;
        }
        else
            last = middle - 1;
        
        middle = first + last / 2; 
    }

    if (first > last)
    {
        prfloatf("Sorry the element you wanted me to Search doesn't exist in the given array\n");
    }

    prfloatf("Just Ended Binary Search\n");
}