#include <stdio.h>

int Add(int a, int b)
{
    return a+b;
}

int Multiply(int a, int b)
{
    return a*b;
}

int do_operation(int (*operation)(int , int) , int a, int b)
{
    return operation(a,b);
}

int main(void) {
    
    int result;
    result = do_operation(Add, 5, 34);
    printf("Answer of Addition = %d \n", result);
    result = do_operation(Multiply, 5, 3);
    printf("Answer of Multiply = %d", result);
	return 0;
}

