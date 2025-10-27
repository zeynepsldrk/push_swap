#include "push_swap.h"

void sa(int stack_a[], int index_a)
{
    if (index_a <= 0)
        return ;
    int temp;

    temp = stack_a[index_a];
    stack_a[index_a] = stack_a[index_a - 1];
    stack_a[index_a - 1] = temp;
}

void sb(int stack_b[], int index_b)
{
    if (index_b <= 0)
        return ;
    int temp;

    temp = stack_b[index_b];
    stack_b[index_b] = stack_b[index_b - 1];
    stack_b[index_b - 1] = temp;
}

void ss(int stack_a[], int stack_b, int index_a, int index_b)
{
    sa(stack_a, index_a);
    sb(stack_b, index_b);
}