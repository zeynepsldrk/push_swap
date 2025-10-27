#include "push_swap.h"

void pa(int stack_a[], int stack_b[], int index_a, int index_b)
{
    if (index_b == -1)
        return ;
    stack_a[index_a + 1] = stack_b[index_b];
    stack_b[index_b] = 0;
}

void pb(int stack_a[], int stack_b[], int index_a, int index_b)
{
    if (index_a == -1)
        return ;
    stack_b[index_b + 1] = stack_a[index_a];
    stack_a[index_a] = 0;
}
