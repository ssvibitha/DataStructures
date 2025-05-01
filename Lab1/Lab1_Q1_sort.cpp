//Program to perform sorting functions
#include<cstdlib>
#include<cstdio>

void display_arr(int *arr,int size);
void copy_array(int*arr, int size,int *copy_arr);
void swap(int *num1, int *num2);
void Bubble_sort(int *sorted,int size);
void Insertion_sort(int *sorted,int size);
void Selection_sort(int *sorted,int size);

int main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int *array = (int*)malloc(size* sizeof(int));
    for(int i=0;i<size;i++){
        printf("Enter element at index %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("Array elements successfully written\n");
    printf("Original array\n");
    display_arr(array,size); // Print original array

    int*sorted_arr = (int*)malloc(size* sizeof(int));
    
    
    
    int choice;
    while(1){
        printf("Menu\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        copy_array(array,size,sorted_arr); 
        
        switch(choice){
            case 1:
                printf("Original array:");
                display_arr(sorted_arr,size);
                printf("Sorting array using bubble sort\n");
                Bubble_sort(sorted_arr,size); 
                printf("Sorted array:\n");
                display_arr(sorted_arr,size); 
                break;
            case 2:
                printf("Sorting array  using selection sort\n");
                Selection_sort(sorted_arr,size);
                printf("Sorted array:\n");
                display_arr(sorted_arr,size);
                break;
            case 3:
                printf("Sorting array  using insertion sort\n");
                Insertion_sort(sorted_arr,size);
                printf("Sorted array:\n");
                display_arr(sorted_arr,size);
                break;
            case 4:
                printf("Terminating program.....\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
// Function to display array
void display_arr(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d%s",arr[i], (i == size-1)?"\n":",");
    }
}
// Function to copy array
void copy_array(int*arr, int size,int *copy_arr){
    for(int i=0;i<size;i++){
        copy_arr[i] = arr[i];
    }
}
// Function to swap two numbers
void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
// Function to implement bubble sort
void Bubble_sort(int *sorted,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(sorted[j]>sorted[j+1]){
                swap(&sorted[j],&sorted[j+1]);
            }
        }
        printf("Pass %d: ",i+1);
        display_arr(sorted,size);
    }  
}
// Function to implement selection sort
void Selection_sort(int *sorted,int size){
    for(int i=0;i<size-1;i++){
        int min =i;
        for(int j= i+1; j<size;j++){
            if(sorted[min]>sorted[j]){
                min = j;
            }
        }
        if(min != i){
            swap(&sorted[i],&sorted[min]);
        }
        printf("Pass %d: ",i+1);
        display_arr(sorted,size);
    }
}
// Function to implement insertion sort
void Insertion_sort(int *sorted,int size){
    for(int i=1;i<size;i++){
        int key = sorted[i];

        int j=i-1;
        while(j>=0 && sorted[j]>key){
            sorted[j+1] = sorted[j];
            j--;
        }
        sorted[j+1] = key;
        printf("Pass %d: ",i);
        display_arr(sorted,size);
    }
}