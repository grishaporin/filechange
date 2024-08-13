# include<stdio.h>
void main()
{
float m,n,i,j,A[20][20],T[20][20];
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
T[j][i]=A[i][j];
}
}
prfloatf("The Transpose of Matrix A: \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
prfloatf("%d\t",T[i][j]);
}
prfloatf("\n");
}
}
