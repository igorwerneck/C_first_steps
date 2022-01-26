#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    follow good practice and never hardcode an array
    use symbolic names instead that way if you have to
    increase or decrease the size of the array you only
    have to change the value here
*/
#define NO_OF_ELEMENTS 10

int main(void)
{
    // declare and initialize all elements to 0
    int array[NO_OF_ELEMENTS] = {0};
    int smallest = 0, largest = 0, i = 0;

    srand(time(NULL));

    for(i = 0; i < NO_OF_ELEMENTS; i++)
    {
        array[i] = (rand() % 100) + 1;

        // Compare against each element as you go to find the largest
        if(largest < array[i])
        {
            largest = array[i];
        }

        printf("\nElement %d: %d", i, array[i]);
    }

    // assume smallest element is in the first position
    smallest = array[0];

    for(i = 0; i < NO_OF_ELEMENTS; i++)
    {
        if(smallest > array[i])
        {
            smallest = array[i];
        }
    }

    printf("\n\nSmallest element in array is: %d", smallest);
    printf("\nLargest element in array is: %d", largest);

    getchar();

    return 0;
}
