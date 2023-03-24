 #include <stdlib.h>

  void f(void)
  {
     int* x = malloc(10 * sizeof(int));
     int *y = calloc(10,sizeof(int));
     //x[10] = 0;        // problem 1: heap block overrun
     free(x);
     free(y);
  }                    // problem 2: memory leak -- x not freed


  int main(void)
  {
     f();
     return 0;
  }
