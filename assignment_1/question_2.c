#include <stdio.h>
#include <stdlib.h>

int a[10][10],b[10][10],c[10][10],d[10][10],r1,c1,r2,c2;
int main() {
    int i,j;
    void display(int,int,int,int,int [10][10], int [10][10]);
    int addition(int,int,int,int,int [10][10],int [10][10]);
    int multiplication(int,int,int,int,int [10][10],int [10][10]);
    
    // Scaning the Matrix
    printf("Enter the no.of rows for 1st array : ");
    scanf("%d",&r1);
    printf("Enter the no.of columns for 1st array : ");
    scanf("%d",&c1);
    
    for(i=0;r1>i;i++){
           for(j=0;c1>j;j++){
              printf("a%d%d : ", i,j);
               scanf("%d",&a[i][j]);
           }
       }
       
    printf("\n");
    printf("Enter the no.of rows for 2nd array : ");
    scanf("%d",&r2);
    printf("Enter the no.of columns for 2nd array : ");
    scanf("%d",&c2);
    
    for(i=0;r2>i;i++){
           for(j=0;c2>j;j++){
               printf("b%d%d ", i,j);
               scanf("%d",&b[i][j]);
           }
       }
    
    display(r1,c1,r2,c2,a,b);
    addition(r1,c1,r2,c2,a,b);
    multiplication(r1,c1,r2,c2,a,b);
    
    
    return 0;
}

// Function to dispaly Arrays
void display(int r1,int c1,int r2,int c2,int a[10][10],int b[10][10]){
    void identity(int,int,int [10][10]);
    
    printf("\nThe 1st array is : \n");
    for(int i=0;r1>i;i++){
          for(int j=0;c1>j;j++){
              printf("%d\t",a[i][j]);
          }
          printf("\n");
      }
      
    identity(r1,c1,a);
    printf("\nThe 2nd array is : \n");
    for(int i=0;r2>i;i++){
          for(int j=0;c2>j;j++){
              printf("%d\t",b[i][j]);
          }
          printf("\n");
      }
      
    identity(r2,c2,b);
}

// Function for Matrix Addition
int addition(int r1,int c1,int r2,int c2,int a[10][10],int b[10][10]){
    int i,j;

    if(r1 != r2 || c1!=c2){
        printf("\nMatrix Addition is not possible.");
    }
    else {
      for (i = 0; r2>i; i++)
        for (j = 0; c2>j; j++) {
          c[i][j] = a[i][j] + b[i][j];
        }
        
        printf("\nThe result after addition\n");
        for(i=0;r1>i;i++){
            for(j=0;c1>j;j++){
             printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}

// Function for Matrix Multiplication
int multiplication(int r1,int c1,int r2,int c2,int a[10][10],int b[10][10]){
    int i,j;

    if(r1 == c2 ){
        for (i = 0; r1>i; i++)
        for (j = 0; c2>j; j++) {
          d[i][j]=0;    
            for(int k=0;k<c1;k++)    
            {    
            d[i][j]+=a[i][k]*b[k][j];    
            } 
        }
        
        printf("\nThe result after multiplication \n");
        for(i=0;r1>i;i++){
             for(j=0;c2>j;j++){
                 printf("%d\t", d[i][j]);
             }
             printf("\n");
          }
    }
    else {
        printf("\nMatrix Multiplication is not possible.");  
    }
}


// Function to check whether the matrix is identity matrix
void identity(int row,int col,int mat[10][10]){
    int flag=1;
    for(int i=0; i<row; i++)
    {
     for(int j=0; j<col; j++)
        {
    	 if(mat[i][j] != 1 && mat[j][i] !=0)
        	 {
        	   flag = 0;
        	 }
	    }
    }
   
   if(flag == 1 ){
	printf("This is an identity matrix.\n\n");
   }
   else{
	printf("This is not an identity matrix.\n\n");
   }
}
