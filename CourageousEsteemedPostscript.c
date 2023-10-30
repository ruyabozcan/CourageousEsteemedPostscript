#include <stdio.h>
#include <string.h>

int main(void) {

  for( float x=0.1;x<1;x+=0.1)
    printf("%.2f\n",x);
  
  return 0;
}