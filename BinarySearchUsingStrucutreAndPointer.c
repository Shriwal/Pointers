/*Binary Search implementation using structure pass as pointer in function*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int *array;
    int mediumIndex;
    int lowIndex;
    int highIndex;
    int answer;
    int numberToSearch;
    int numberOfElement;
}Parameter_t;


int BinarySearch(Parameter_t *parameter)
{
    parameter->lowIndex =0, parameter->highIndex =parameter->numberOfElement-1;
    
    while(parameter->lowIndex <= parameter->highIndex)
    {
        parameter->mediumIndex = (int)ceil((parameter->lowIndex + parameter->highIndex) / 2.0);
        
        if(parameter->array[parameter->mediumIndex] == parameter->numberToSearch)
        {
            parameter->answer = parameter->mediumIndex;
            return 1;        
        }
        else
        {
            if(parameter->array[parameter->mediumIndex] < parameter->numberToSearch)
            {
                parameter->lowIndex = parameter->mediumIndex+1;
            }
            else if(parameter->array[parameter->mediumIndex] > parameter->numberToSearch)
            {
                parameter->highIndex = parameter->mediumIndex-1;
            }
        }
    }
    return 0;
}

int main() 
{
    Parameter_t parameter;
    int numberOfElement,numberToSearch;
     
    scanf("%d %d", &numberOfElement,&numberToSearch);

    int array[numberOfElement];

    for(int i=0; i<numberOfElement; i++)
    {
        scanf("%d", &array[i]);
    }
    
    parameter.array = malloc((numberOfElement)*sizeof(Parameter_t*));
    parameter.array = array;
    parameter.numberOfElement = numberOfElement; 
    parameter.numberToSearch = numberToSearch; 

    int isResultPresent = BinarySearch(&parameter);
    
    if(isResultPresent)
    {
        printf("Position of the found element at %d", parameter.answer);               
    }
    /*Checking code Pull Request*/
    else
    {
        printf("Element not found");
    }
    return 0;
}
