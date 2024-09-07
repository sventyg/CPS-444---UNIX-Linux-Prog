#include <stdio.h>
int main(void){
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(source,target1,5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    print
}

copy_arr(double source[], double target[], int num){
    for(i = 0; i <num; i++)
    target[i] = source[i];
    return;
}

copy_ptr(double * target, double * source, int num){
    for (i = 0; i < num; i++){
    *target = *source;
    source++; 
    target++;
    }
return;
}
copy_ptrs(double * target, double * source, double ptr[]){
    for (i = 0; i < num; i++){
        *target = 
    }

}
