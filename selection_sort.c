// Selection sort in C

#include <stdio.h>

// function to swap the the position of two elements
void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    int step, i;
    for (step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (i = step + 1; i < size; i++)
        {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[i] < array[min_idx])
                min_idx = i;
        }

        // put min at the correct position
        swap(&array[min_idx], &array[step]);
    }
}

// function to print an array
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// driver code
int main()
{
    int i,p;
    int data[100];
    printf("Enter No.of Elements in the Array:\n");
    scanf("%d",&p);
    printf("Enter the array Elements:\n");
    for(i=0;i<p;i++)
    {
        scanf("%d",&data[i]);
    }

    printf("Unsorted Array\n");
    printArray(data, p);
    selectionSort(data, p);
    printf("Sorted array in Acsending Order:\n");
    printArray(data, p);
}