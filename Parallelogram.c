#include <stdio.h>
void pattern(int n,int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=m;j++)
        {
            printf("*");
        }
        printf("\n");
    }
   
        
   
}
int main() {
    int n=5,m=5;
    pattern(n,m);

    return 0;
}
