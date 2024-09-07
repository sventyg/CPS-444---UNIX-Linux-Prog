#include <stdio.h>

double largest_one(double array[], int size){
    int i; 
    double max = array[0];
    for( i = 0; i < size; i++ ){
        if (max<array[i]){
            max = array[i];
        }
    }
    return max;
}

int main(){
    double array[] = {1.0,2.0,3.0,5.5,4.0};
    int size = sizeof(array) / sizeof(array[0]);
    double num = largest_one(array, size);
    printf("Largest in array: %G", num);
    return 0;
}
