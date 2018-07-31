#include "myatoiHex.h"
#include "myatoi.h"

int sixteen_raised(int pow){
  assert(pow >= 0);
  int value = 1;
  for(int i=0; i<pow;i++){
    value *= 16;
  }
  return value;
}

int myatoiHex(const char *str){
// function that converts a hexidecimal string into a integer decimal number
  
  unsigned size = get_str_size(str);
  int number = 0;
  int end = 0;
  int sign = 1;
  // detect negatives
  if(str[0] == 45){
    end = 1;
    sign = -1;
  }
  char digit = '\0';
  int dec_dig = 0;
  for(int i = end;i<size-1;i++){
    digit = str[i];
    if(digit >= 65 && digit <= 70){
      // the character is a letter
      dec_dig = digit-55;
    }
    else if(digit >= 97 && digit <= 102){
      // the character is a letter
      dec_dig = digit-87;
    }
    else if(digit <= 57 && digit >= 48){
      // the character is a number
      dec_dig = digit-48;
    }
    else{
      assert(1);
    }
    number += sign*(dec_dig)*sixteen_raised(size-2-i);
  }
  return number;
}
