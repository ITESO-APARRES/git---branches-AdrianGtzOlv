#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main(int argc, char** argv)
{
    return(EXIT_SUCCESS);   
}

int doubleInt(int a)
{
    if(a > MAX_INT)
    {
        return -1;
    }
    return a*2;
}

double doubleDouble(double a)
{
    if(a > MAX_DOUBLE)
    {
        return -1;
    }

    return a*2;
}

