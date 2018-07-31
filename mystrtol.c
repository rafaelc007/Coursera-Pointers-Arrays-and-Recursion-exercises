#include "mystrtol.h"

int mystrtol(const char *str, const char ** endptr, int base){
// function that converts a hexidecimal string into a integer decimal number
  // base = 0 -> decimal
  // base = 1 -> hex
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
  const char * pointer = NULL;
  for(int i = end;i<size-1;i++){
    digit = str[i];
    pointer = &str[i];
    switch(base){
    case 0:
      if(digit <= 57 && digit >= 48){
	// the character is a number
	dec_dig = digit-48;
      }
      else{
	endptr = &pointer;
	return number;
      }
      number += sign*(dec_dig)*ten_raised(size-2-i);
      break;
    case 1:
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
	endptr = &pointer;
	return number;
      }
      number += sign*(dec_dig)*sixteen_raised(size-2-i);
      break;
    }
  }
  endptr = NULL;
  return number;
}

/*
int main(){
  const char ** ptr = NULL;
  char name[] = "1234";

  int number1 = mystrtol(name, ptr, 0);
  int number2 = mystrtol(name, ptr, 1);

  printf("value %s in decimal is %d.\n",name, number1);
  printf("value %s in hex is %d.\n",name, number2);
  

  return EXIT_SUCCESS;
}
*/
