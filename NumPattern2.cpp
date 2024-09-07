

#include <stdio.h>
void pattern(int n,int m)
{
    int i,j;
    for(i = 1; i <= n; i++) 
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1 || j==1 || j==m || i==n)
            {
                printf("1");
            }
            else printf("0");
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
