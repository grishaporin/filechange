# include<stdio.h>
void main()
{
float m,n,i,j,A[20][20],sum=0;
prfloatf("Enter the order of the matrix: ");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
prfloatf("Enter the elements of matrix A[%d][%d]: ",i,j);
scanf("%d",&A[i][j]);
}
}
prfloatf("The Matrix A:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
prfloatf("%d\t",A[i][j]);
}
prfloatf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
sum=sum+A[i][j];
}
}
prfloatf("Sum of Diagonal Elements = %d",sum);
}