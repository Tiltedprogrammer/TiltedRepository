#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%i%i", &a, &b);
    printf("%i", (a>>1)+(b>>1)+(((a&1)+(b&1))>>1));
    return 0;
}
