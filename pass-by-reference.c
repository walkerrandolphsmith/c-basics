#include <stdio.h>

int multiplyByTwo(int theNumber)
{
	return theNumber * 2;
}

void multiplyByTwoRef(int *theNumber)
{
	*theNumber = *theNumber * 2;
}

int main(int argc, char *argv[])
{

    int number = 10;

    printf("\nEntered Number before multiplyByTwo function is %i.\n", number);

    number = multiplyByTwo(number);

    printf("\nEntered Number after multiplyByTwo function is %i.\n", number);


    int otherNumber = 10;

    printf("\nEntered otherNumber before multiplyByTwoRef function is %i.\n", otherNumber);

     multiplyByTwoRef(&otherNumber);

    printf("\nEntered otherNumber after multiplyByTwoRef function is %i.\n", otherNumber);

    return 0;
}
