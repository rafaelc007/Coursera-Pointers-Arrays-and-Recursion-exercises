#include <stdlib.h>
#include <stdio.h>
#include "myatoi.h"
#include "myatoiHex.h"

int main(){
  const char name1[] = "1234";
  const char name2[] = "FFF";
  
  int number1 = myatoi(name1);
  int number2 = myatoiHex(name1);
  int number3 = myatoiHex(name2);
  
  printf("value 1 given: %s.\n",name1);
  printf("value 1 returned in dec %d.\n",number1);
  printf("value 1 returned in hex %d.\n \n",number2);
  printf("value 2 given: %s.\n",name2);
  printf("value 2 returned in dec %d.\n",number3);
  
  return EXIT_SUCCESS;
}
