#include <stdio.h>
void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
   
        
   
}
int main() {
    int n=5;
    pattern(n);

    return 0;
}
