#include <stdio.h>

int is_same_diagonals(int n, int a[]){    // Where a[] represents a 2D square matrix of size n * n
    int currentValue = 0;

    for(int i = 0; i < (n - 1); i++){       //Checking diagonals along the horizontal (including first element)
        currentValue = a[i];
        for(int j = 1; j < (n - i); j++){
            if(a[i + (j * (n + 1))] != currentValue){
                return 0;
            }
        }
    }

    for(int i = 1; i < (n - 1); i++){       //Checking diagonals along the vertical (excluding first element)
        currentValue = a[i * n];
        for(int j = 1; j < (n - i); j++){
            if(a[(i * n) + (j * (n + 1))] != currentValue){
                return 0;
            }
        }
    }
    
    return 1;
}