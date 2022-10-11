#include<stdio.h>

int main()
{
    int age[50],n;
    int compareFunction(int,int[50]);
    
    printf("\nEnter the number employees : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;++i){
        printf("Enter age of employee %d : ", i + 1);
        scanf("%d",&age[i]);
    }
    
    sortingFunction(n,age);
    compareFunction(n,age);
    
    return 0;
}

// Function to find the largest ane smallest element
int compareFunction(int n,int age[50]){
    
    int large,small;
    large=small=age[0];
    
    for(int i=1;i<n;++i){
        if(age[i]>large){
            large=age[i];
        }
        
        if(age[i]<small){
            small=age[i];
        }
    }
    
    printf("\nLower age is : %d",small);
    printf("\nUpper age is : %d",large);
}

// Function to sort the array
void sortingFunction(int n,int age[100]){
    for (int i = 0; i < n; ++i) 
        {
            for (int j = i + 1; j < n; ++j)
            {
 
                if (age[i] > age[j]) 
                {
                    int a =  age[i];
                    age[i] = age[j];
                    age[j] = a;
                }
 
            }
 
        }
    printf("The ages of employees arranged in ascending order are given below : \n");
    for (int i = 0; i < n; ++i)
        printf("%d\t", age[i]);
}
