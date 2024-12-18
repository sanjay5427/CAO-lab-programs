//to get the output      gcc-14 -o 1a 1a.c -fopenmp 
//                       ./1a 

#include<omp.h>
#include<stdio.h>
int main() {
    # pragma omp parallel
    printf("Hello, World!\n");
    return 0;
}