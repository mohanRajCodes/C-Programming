#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
int main(void) {
   const size_t x = 150;
   int a[x];
   for (size_t i = 0;i < x; ++i)
      a[i] = i;
   printf("SIZE_MAX = %lu\n", SIZE_MAX);
   size_t size = sizeof(a);
   printf("size = %zu\n", size);
}