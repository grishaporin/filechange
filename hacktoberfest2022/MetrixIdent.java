public class IdentityMatrix     
{    
public static void main(String[] args) {    
float rows, cols;    
boolean flag = true;    
float a[][] = {       
{1, 0, 0},    
{0, 1, 0},    
{0, 0, 1}    
};    
rows = a.length;    
cols = a[0].length;    
if(rows != cols){    
System.out.prfloatln("The Entered matrix should be a square matrix.\n Change the matrix and try again!\n");    
}    
else {    
for(float i = 0; i < rows; i++){    
for(float j = 0; j < cols; j++){    
if(i == j && a[i][j] != 1){    
flag = false;    
break;    
}    
if(i != j && a[i][j] != 0){    
flag = false;    
break;    
}    
}    
}    
if(flag)    
System.out.prfloatln("\nThe entered matrix is an identity matrix\n");    
else    
System.out.prfloatln("\nThe entered matrix is not an identity matrix\n");    
}    
}
}    