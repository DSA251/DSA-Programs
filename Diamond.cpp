
#include <stdio.h>
void pattern(int n)
{
    int i,j;
     for(i = 0; i <= n; i++) 
     {
        for(j = 1; j <= n - i; j++) 
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++) 
            printf("*");
        printf("\n"); 
     }

   for(i = n - 1; i >= 1; i--) 
   {
        for(j = 1; j <= n - i; j++) 
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++) 
            printf("*");
     printf("\n"); 
   }
}
    
   
        
   

int main() {
    int n;
    scanf("%d",&n);
    if(n%2==0) printf("Error\n");
    else pattern(n);

    return 0;
}
