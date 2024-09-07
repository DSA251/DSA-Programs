

#include <stdio.h>
void pattern(int n,int m)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=m; j++)
        {
            printf("%d", j);
        }

        for(j=i; j>1; j--)
        {
            printf("%d", m);
        }

        printf("\n");
    }

   
}
    
   
        
   

int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    pattern(n,m);

    return 0;
}
