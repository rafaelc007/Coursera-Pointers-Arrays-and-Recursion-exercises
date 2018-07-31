#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int ten_raised(int pow){
  assert(pow >= 0);
  int value = 1;
  for(int i=0; i<pow;i++){
    value *= 10;
  }
  return value;
}

unsigned get_str_size(const char *str){
  unsigned size = 0;
  while(1){
    if(str[size] == '\0'){
      return size+1;
    }
    else{
      size++;
    }
  }
}

int myatoi(const char *str){
  // function that converts a numeric string into a integer number
  
  unsigned size = get_str_size(str);
  int number = 0;
  for(unsigned i = size-1;i>=0;i--){
    //make sure the value is a number
    assert(str[i] <= 57);
    assert(str[i] >= 48);

    number += (str[i]-48)*ten_raised(i);
   }
  return number;
}

int main(){
  const char name[] = "1234";
  
  int number = myatoi(name);
  printf("value given: %s.\n",name);
  printf("value returned %d.\n",number);
  
  return EXIT_SUCCESS;
}
