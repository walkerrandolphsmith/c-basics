#include <stdio.h>

const int MAX = 3;

int main(){
  printf("Pointer to an integer references the value at the address\n");

  int var = 10;
  int *ip;

  ip = &var;

  printf("Value of var: %i \n", var);

  printf("Address stored in ip: %i \n", ip);

  printf("Value held at the address pointed to by ip: %i \n", *ip);

  printf("Pointer arithmetic to iterate over an array by starting at the value of the pointer at the address of the array and then altering the address of a pointer.\n");


  int array[MAX] = {10,100,1000};
  int *ptr;

  ptr = array;
  for(int i = 0; i < MAX; i++){
    printf("Address of the array[%i] = %i \n", i, ptr);

    printf("Value of array[%i] = %i \n", i, *ptr);
    ptr++;
  }

  return 0;
}
