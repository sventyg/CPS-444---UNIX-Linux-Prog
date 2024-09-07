#include <stdio.h>

int largest_one(int array[], int size){
    int i; 
    int max = array[0];
    for( i = 1; i < size; i++ ){
        if (max<array[i]){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int array[] = {1,2,3,5,4};
    int size = sizeof(array) / sizeof(array[0]);
    int num = largest_one(array, size);
    printf("Largest in array: %d", num);
    return 0;
}
