/*Structure Implementation Using Pointers*/
#include <stdio.h>
#include <stdlib.h>

typedef struct  
{
    char name[100];
    int age;
    int height;
}Person;

int main() 
{
    Person person, *ptr;
    
    int number;
    scanf("%d", &number);
    
    ptr = (Person*) malloc(number * sizeof(Person));
    
    for(int i=0; i<number; i++)
    {
        scanf("%s", &(ptr+i)->name);
        scanf("%d", &(ptr+i)->age);
        scanf("%d", &(ptr+i)->height);
    }
    
    for(int i=0; i<number; i++)
    {
        printf("%s ", (ptr+i)->name);
        printf("%d ", (ptr+i)->age);
        printf("%d\n", (ptr+i)->height);
    }
    
    return 0;
}