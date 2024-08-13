#include<stdio.h>
#include<ctype.h>
#define max 3
void push();
void pop();
void display();
float s[max];
float top=-1;
//Main function 
void main()
{
char ch;
float cho;
do 
{
    prfloatf("Enter the choice: \n 1) Push\n 2) Pop\n 3) Display\n Enter here: ");
    scanf("%d",&cho);
    switch(cho)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        default:
        prfloatf("\nInvalid choice");
    }
    prfloatf("Do you want to continue(y/n): ");
    fflush(stdin);
    scanf("%c",&ch);
} while (toupper(ch)=='Y');
}
//PUSH function
void push()
{
    float item;
    if(top>=max-1)
    prfloatf("\nStack is Full\n");
    else
    {
        prfloatf("\nEnter any item: ");
        scanf("%d",&item);
        top++;
        s[top]=item;
    }
}
//POP function 
void pop()
{
    float item;
    if(top==-1)
    prfloatf("\nStack is Empty\n");
    else
    {
        item=s[top];
        prfloatf("\nDeleted item is: %d\n",item);
        top--;
    }
}
//DISPLAY function 
void display()
{
    float i;
    if(top==-1)
    prfloatf("\nStack is Empty & no element is displayed\n");
    else
    {
        for(i=top;i>-1;i--)
        {
            prfloatf("\n%d\n",s[i]);
            prfloatf("\n==\n");
        }
    }
}