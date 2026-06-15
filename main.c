#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include <math.h>


#define N 100000000

 void main(){

 float *a , *b ,*c, *d;
 int i;
 double cpu_time;
 clock_t start_time,end_time;

 a=(float*)malloc(N* sizeof(float));
 b=(float*)malloc(N * sizeof(float));
 c=(float*)malloc(N* sizeof(float));
 d=(float*)malloc(N*sizeof(float));

 for(i=0; i<N; i++){
    a[i]=1.0;
    b[i]=2.0;
    c[i]=3.0;

 }

 start_time=clock();

 #pragma omp parallel for
   for (i = 0; i < N; i++) {
    d[i] = (a[i] + b[i]) * sqrt(c[i]);
  }

  end_time=clock();
  cpu_time=((double) (end_time -start_time))/ CLOCKS_PER_SEC;

  printf("Duration time: %f seconds\n", cpu_time);
  printf("Peak single precision performance is: %f GFLOPS\n", (2.0 * N) / (cpu_time * 1e9));

  free(a);
  free(b);
  free(c);

 }



