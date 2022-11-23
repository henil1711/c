#include<stdio.h>
int main(){
    int n,j=0,i;

    printf("Enter any number :");
    scanf("%d", &n);

    for( i=1;i<=n;i++)
    {
        if(n % i==0)
        {
            j++;
        }
    }
        if(j==2)
    
        printf(" prime numbar");

        else
        printf("  not prime numbar");
        
        return 0;



}