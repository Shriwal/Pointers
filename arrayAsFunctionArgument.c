/*Array as function argument*/

#include <stdio.h>
#include <stdlib.h>

int SumOfElements(int A[], int size)
{
    int i=0,sum=0;
    for(int i=0; i<size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main() 
{
    int A[] = {2,4,5,6,7};
    int total = SumOfElements(A, (sizeof(A)/sizeof(A[0])));
    printf("%d", total);
    return 0;
}