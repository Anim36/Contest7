#include <stdio.h>

int main()
{
    int a, b;

    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);
        printf("%d\n", a*(2*b));
    }
    return 0;
}
