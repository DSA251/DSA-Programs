

#include <stdio.h>
void pattern(int n,int m)
{
    int i,j;
    for(i = 1; i <= n; i++) 
    {
        if(i%2)
        {
            for(j = 1; j <= m; j++) 
                printf("%d ",j);
            printf("\n");
        }
        else
        {
            for(j = m; j >=1 ; j--) 
                printf("%d ",j);
            printf("\n"); 
        }
       
    }

   
}
    
   
        
   

int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    pattern(n,m);

    return 0;
}
