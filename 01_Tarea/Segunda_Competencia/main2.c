#include <stdio.h>
#include "operaciones.h"
int main(void){
  int x,z;
  scanf("%d",&x);
  scanf("%d",&z);
  suma(x,z);
  resta(x,z);
  multiplicacion(x,z);
  division(x,z); 
  return 0;
}
