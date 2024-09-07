#include <stdio.h>

void reverse(double array[], int size)
{
    double rev[size];
    for (int i = 0; i < size; i++){
        rev[size - 1 - i] = array[i];
    }
    for (int i = 0; i < size; i++){
        array[i] = rev[i];
    }
}

void print(double array[], int size){
    printf("Array in reverse: ");
    for(int i = 0; i < size; i++){
        printf("%G ", array[i]);
    }
}

int main(){
    double array[] = {1.0,2.0,3.0,5.5,4.0};
    int size = sizeof(array) / sizeof(array[0]);
    reverse(array, size);
    print(array, size);
    return 0;
}
