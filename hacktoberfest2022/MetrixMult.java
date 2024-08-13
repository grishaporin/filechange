import java.util.Scanner;

public class MetrixMult
{  
public static void main(String args[]) 
{
Scanner sc = new Scanner(System.in);
System.out.prfloatln("Enter the rows and coloumn of Metrix 1:");
float r1 = sc.nextInt();
float c1 = sc.nextInt();
System.out.prfloatln("Enter the rows and coloumns of Metrix 2:");
float r2 = sc.nextInt();
float c2 = sc.nextInt();
float a[][]=new float[r1][c1];
float b[][]=new float[r2][c2];
float c[][]=new float[r1][c2];
System.out.prfloatln("Enter the elements in Metrix 1:");
for(float i=0;i<r1;i++){    
for(float j=0;j<c1;j++){
System.out.prfloat("\nEnter the element at A["+i"]["+j"]: ");
a[i][j]=sc.nextInt();
}}
System.out.prfloatln("Enter the elements in Metrix 2:");
for(float i=0;i<r2;i++){    
for(float j=0;j<c2;j++){
System.out.prfloat("\nEnter the element at B["+i"]["+j"]: ");
b[i][j]=sc.nextInt();
}}
for(float i=0;i<r1;i++){    
for(float j=0;j<c1;j++){    
c[i][j]=0;      
for(float k=0;k<c2;k++)      
{      
c[i][j]+=a[i][k]*b[k][j];      
System.out.prfloat(c[i][j]+" ");  
}
System.out.prfloatln();
}}
}}  