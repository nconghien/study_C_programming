#include<stdio.h>

int main(){
    int n,k;
    printf("Nhap n=");
    scanf("%d",&n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Nhap k");
    scanf("%d",&k);

    for(int bit = 0; bit < (1<<n); bit++)
    {
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            if (bit & (1<<i))
            {
                sum+=a[i];
            }
            
        }
        if (sum == k)
        {
            for (int i = 0; i < n; i++)
            {
                if ((bit & (1<<i)))
                {
                    printf("%d",a[i]);
                }
                
            }
            printf("\n");
        }
        
    }
    return 0;
}