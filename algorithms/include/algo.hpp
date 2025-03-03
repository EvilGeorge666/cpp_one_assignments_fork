#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

long fibonacci(const int n)
{
    long fibAns = 2;
    long prevNum = 1;

    if(n <= 3)
    {
        fibAns = n - 1;
    }
    else
    {
        for(int i = 0; i < n - 3; i++)
        {
            long temp = fibAns + prevNum;
            prevNum = fibAns;
            fibAns = temp;
        }
    }

    return fibAns;
}

int linear_search(Array * a, const int target)
{
    int idx = 0;
    for (size_t i = 0; i < a->len; i++) 
    {
        int elem = a->data[i];
        if (elem == target)
        {
            return idx; 
        }
        idx++;
    }
    return -1;
}

long factorial(const int n)
{
    long factAns = 1;
    int i;
    
    for(i = 1; i <= n; i++)
    {
        factAns *= i;
    }

    return factAns;
}

#endif // ALGO_H_
