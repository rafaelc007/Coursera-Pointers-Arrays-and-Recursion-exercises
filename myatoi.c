#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int ten_raised(int pow){
  int value = 1;
  for(int i=0; i<pow;i++){
    value *= 10;
  }
  return value;
}

int myatoi(const char *str){
  // function that converts a numeric string into a integer number
  
  int i = 0;
  int number = 0;
  while(1){
    if(str[i] == '\0'){
      return number;
    }
   
    //make sure the value is a number
    assert(str[i] <= 57);
    assert(str[i] >= 48);

    number += ten_raised(i);

   }
}

int main(){
  const char name[] = "1234";

  printf("testing: 10^0 = %d.\n", ten_raised(0));
  printf("testing: 10^5 = %d.\n", ten_raised(5));  
  //int number = myatoi(name);
  printf("value given: %s.\n",name);
  //printf("value returned %d.\n",number);
  
  return EXIT_SUCCESS;
}
