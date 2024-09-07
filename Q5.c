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
double smallest_one(double array[], int size){
    int i; 
    double min = array[0];
    for( i = 0; i < size; i++ ){
        if (min>array[i]){
            min = array[i];
        }
    }
    return min;
}
int main(){
    double array[] = {1.0,2.0,3.0,5.5,4.0};
    int size = sizeof(array) / sizeof(array[0]);
    double bignum = largest_one(array, size);
    double smallnum = smallest_one(array, size);
    double dif = bignum - smallnum;
    printf("Difference of largest and smallest: %G", dif);
    return 0;
}
