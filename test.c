
#include <stdio.h>

struct node {
    int a;
    int b;
    int c;
    int e[3];
};

typedef int (*PTR3) [3];

main()
{
    struct node n (4,5,6,(0,1,2));
    PTR3 ptr  = (PTR3) &(n);
    
    int *p1 (int) (ptr);
    int *p2= (int) (ptr+1);
    printf("%d %d %d %d", *p1, *p2. *(p1-1), *(p2-2));
}