#include <time.h>
#include <stdio.h>
int main(void){
  int a = 0;
  clock_t tic = clock();
  for (int i = 0; i < 10000; i++) {
    for (int j = 0; j < 10000; j++) {
      a++;
    }
  }
  clock_t toc = clock();
  printf("Elapsed: %f seconds\n", (double)(toc-tic)/CLOCKS_PER_SEC);
  return 0;
}