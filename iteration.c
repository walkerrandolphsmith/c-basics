#include <stdio.h>
#include <stdlib.h>

float average(int cardinality, float *array){
  float sum = 0.0f;

  for(int i = 0; i < cardinality; i++){
    sum += *array;
    array++;
  }
  sum /= cardinality;
  return sum;
}

int main()
{
  int i;
  int size = 20;
  float numbers[size];
  float sum = 0.0f;

  for(i = 0; i < size; i++){
    numbers[i] = rand();
  }

  for(i = 0; i< size; i++){
    printf("\n numbers[%i] = %f", i, numbers[i]);
  }

  for(i = 0; i < size; i++){
    sum += numbers[i];
  }
  sum /= 20;

  printf("\nThe average of the array is %f", sum);

  sum = average(20, &numbers[0]);

  printf("\nThe average of the elements is %f\n", sum);


}
