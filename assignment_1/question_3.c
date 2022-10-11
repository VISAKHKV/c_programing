#include <stdio.h>

int n;
int age[100];

void main() {
    
    void sortingFunction(int,int [100]);
    int largest(int,int [100]);
    int smallest(int,int [10]);
    
    printf("Enter the number employees : ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
    printf("Enter age of employee %d : ", i + 1);
    scanf("%d",&age[i]);
    }
    
    sortingFunction(n,age);
    largest(n,age);
    smallest(n,age);
    
    return 0;
}

// Function to find the largest age
int largest(int n, int age[100]){

    for (int i = 1; i < n; ++i) {
        if (age[0] < age[i]) {
          age[0] = age[i];
        }
    }
    
    printf("\nUpper age is = %d", age[0]);
}


// Function to find the smallest age
int smallest(int n, int age[100]){
    
    int min = age[0];    
    for (int i = 0; i < n; i++) {
        if (age[i] < min) {
          min = age[i];    
        }
    }
    
    printf("\nLower age is = %d", min);
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