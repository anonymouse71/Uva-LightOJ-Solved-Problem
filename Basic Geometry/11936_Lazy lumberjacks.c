#include<stdio.h>
int main ()
{
    int n,a,b,c,x,y,z,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b&&a>=c)
        {
            x=a;
            if(b>=c)
            {
                y=b;
                z=c;
            }
            else
            {
                y=c;
                z=b;
            }
        }
        else if(b>=a&&b>=c)
        {
            x=b;
            if(a>=c)
            {
                y=a;
                z=c;
            }
            else
            {
                y=c;
                z=a;
            }
        }
        else
        {
            x=c;
            if(a>=b)
            {
                y=a;
                z=b;
            }
            else
            {
                y=b;
                z=a;
            }
        }
        if(x<y+z)
        printf("OK\n");
        else
        printf("Wrong!!\n");
    }
    return 0;
}