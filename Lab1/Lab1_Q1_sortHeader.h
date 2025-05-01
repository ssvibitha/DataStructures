//Header file containing sort function
#include<cstdlib>
#include<cstdio>

void swap(int *num1, int *num2);
void Bubble_sort(int *sorted,int size);

// Function to swap two numbers
void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}
// Function to implement bubble sort
void Bubble_sort(int *sorted,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(sorted[j]>sorted[j+1]){
                swap(&sorted[j],&sorted[j+1]);
            }
        }
    }
}