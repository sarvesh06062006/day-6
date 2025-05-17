
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b=0,c=0,max;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b>=c)
        max=b;
        else
        max=c;
        b=a[i]+c;
        c=max;
    }
    if(b>=c)
    printf("%d",b);
    else
    printf("%d",c);

    return 0;
    
}
