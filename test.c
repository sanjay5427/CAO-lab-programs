#include <omp.h>
#include <stdio.h>

int main() {
    #pragma omp parallel
    {
        printf("Thread %d says hello!\n", omp_get_thread_num());
    }
    return 0;
}

// for output :
//   gcc-14 -o test test.c -fopenmp
//   ./test